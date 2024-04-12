#include <iostream>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <string>

using namespace std;

struct Item {
    char lhs; // Left-hand side of production
    string rhs; // Right-hand side of production
    size_t dot; // Position of the dot in the production
    char lookahead; // Lookahead symbol
};

// Production structure
struct Production {
    char lhs;
    string rhs;
};

// LR(1) parser class
class LR1Parser {
private:
    vector<Production> grammar; // Grammar rules
    map<char, set<char>> firstSets; // First sets for terminals and non-terminals
    map<char, set<char>> followSets; // Follow sets for non-terminals
    map<size_t, map<char, size_t>> actionTable; // Action table
    map<size_t, map<char, size_t>> gotoTable; // Goto table
    vector<Item> canonicalCollection; // LR(1) items
    map<char, size_t> symbolToIndex; // Mapping of symbols to indices

    // Function to compute FIRST set
    set<char> computeFirst(char symbol) {
        set<char> first;
        if (isupper(symbol)) { // Non-terminal
            for (const Production& prod : grammar) {
                if (prod.lhs == symbol) {
                    if (prod.rhs.empty() || (prod.rhs[0] == symbol && prod.rhs.size() == 1)) {
                        first.insert('^'); // Epsilon production
                    } else {
                        for (char rhs_symbol : prod.rhs) {
                            if (rhs_symbol != symbol) {
                                set<char> rhs_first = computeFirst(rhs_symbol);
                                first.insert(rhs_first.begin(), rhs_first.end());
                                if (rhs_first.find('^') == rhs_first.end()) {
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        } else { // Terminal
            first.insert(symbol);
        }
        return first;
    }

    // Function to compute FOLLOW set
    set<char> computeFollow(char symbol) {
        set<char> follow;
        if (symbol == grammar[0].lhs) { // Start symbol
            follow.insert('$');
        }
        for (const Production& prod : grammar) {
            size_t pos = prod.rhs.find(symbol);
            if (pos != string::npos && pos + 1 < prod.rhs.size()) {
                set<char> rest_first = computeFirst(prod.rhs[pos + 1]);
                follow.insert(rest_first.begin(), rest_first.end());
                if (rest_first.find('^') != rest_first.end()) {
                    set<char> follow_lhs = computeFollow(prod.lhs);
                    follow.insert(follow_lhs.begin(), follow_lhs.end());
                }
            }
        }
        return follow;
    }

    // Function to build LR(1) items
void buildItems() {
    size_t index = 0;
    canonicalCollection.push_back({grammar[0].lhs, "." + grammar[0].rhs, 0, '$'});
    for (size_t i = 0; i < canonicalCollection.size(); ++i) {
        const Item& item = canonicalCollection[i];
        size_t dot_pos = item.rhs.find('.');
        if (dot_pos != string::npos && dot_pos + 1 < item.rhs.size()) {
            char next_symbol = item.rhs[dot_pos + 1];
            string after_dot = item.rhs.substr(dot_pos + 2);
            set<char> lookahead = {item.lookahead};
            if (after_dot.empty()) {
                lookahead.insert(item.lookahead);
            } else {
                set<char> after_dot_first = computeFirst(after_dot[0]);
                if (after_dot_first.find('^') != after_dot_first.end()) {
                    lookahead.insert(after_dot_first.begin(), after_dot_first.end());
                    lookahead.erase('^');
                    set<char> follow_symbol = computeFollow(item.lhs);
                    lookahead.insert(follow_symbol.begin(), follow_symbol.end());
                } else {
                    lookahead.insert(after_dot_first.begin(), after_dot_first.end());
                }
            }
            Item new_item = {item.lhs, next_symbol + "." + after_dot, 0, item.lookahead};
            auto it = find_if(canonicalCollection.begin(), canonicalCollection.end(), 
                [&](const Item& existing_item) {
                           existing_item.rhs == new_item.rhs &&
                           existing_item.dot == new_item.dot &&
                           existing_item. == new_item.lookahead;
                });
            if (it == canonicalCollection.end()) {
                canonicalCollection.push_back(new_item);
                actionTable[i][next_symbol] = index + 1;
                ++index;
                for (char terminal : lookahead) {
                }
            } else {
                actionTable[i][next_symbol] = -distance(canonicalCollection.begin(), it);
            }
        }
    }
}


    // Function to build LR(1) parsing tables
    void buildTables() {
        for (size_t i = 0; i < canonicalCollection.size(); ++i) {
            const Item& item = canonicalCollection[i];
            size_t dot_pos = item.rhs.find('.');
            if (dot_pos != string::npos && dot_pos + 1 < item.rhs.size()) {
                char next_symbol = item.rhs[dot_pos + 1];
                size_t next_index = actionTable[i][next_symbol];
                if (isupper(next_symbol)) {
                    gotoTable[i][next_symbol] = next_index;
                }
            }
        }
    }

public:
    // Constructor
    LR1Parser(vector<Production>& grammar, char startSymbol) : grammar(grammar) {
        // Compute FIRST sets for terminals and non-terminals
        for (const Production& prod : grammar) {
            if (firstSets.find(prod.lhs) == firstSets.end()) {
                firstSets[prod.lhs] = computeFirst(prod.lhs);
            }
            for (char symbol : prod.rhs) {
                if (firstSets.find(symbol) == firstSets.end()) {
                    firstSets[symbol] = computeFirst(symbol);
                }
            }
        }

        // Compute FOLLOW sets for non-terminals
        for (const Production& prod : grammar) {
            if (isupper(prod.lhs)) {
                if (followSets.find(prod.lhs) == followSets.end()) {
                    followSets[prod.lhs] = computeFollow(prod.lhs);
                }
            }
        }

        // Build LR(1) items
        buildItems();

        // Build LR(1) parsing tables
        buildTables();
    }

    // Parse function
    bool parse(string input) {
        stack<size_t> stateStack;
        stack<char> symbolStack;
        stateStack.push(0);
        size_t inputIndex = 0;
        input += '$'; // End of input marker
        char lookahead = input[inputIndex];
        while (true) {
            size_t currentState = stateStack.top();
            if (actionTable[currentState].find(lookahead) != actionTable[currentState].end()) {
                size_t action = actionTable[currentState][lookahead];
                if (action > 0) { // Shift
                    stateStack.push(action - 1);
                    symbolStack.push(lookahead);
                    ++inputIndex;
                    lookahead = input[inputIndex];
                } else if (action < 0) { // Reduce
                    size_t productionIndex = -action - 1;
                    const Item& item = canonicalCollection[productionIndex];
                    size_t rhsSize = item.rhs.size() - 1;
                    if (item.rhs[0] != '^') { // Not epsilon
                        for (size_t i = 0; i < rhsSize; ++i) {
                            stateStack.pop();
                            symbolStack.pop();
                        }
                    }
                    char lhs = item.lhs;
                    stateStack.push(gotoTable[stateStack.top()][lhs] - 1);
                    symbolStack.push(lhs);
                } else { // Accept
                    return true;
                }
            } else { // Error
                return false;
            }
        }
    }
};

int main() {
    // Define the grammar
    vector<Production> grammar = {
        {'S', "E"},
        {'E', "E+T"},
        {'E', "T"},
        {'T', "T*F"},
        {'T', "F"},
        {'F', "(E)"},
        {'F', "id"}
    };

    // Create the parser
    LR1Parser parser(grammar, 'S');

    // Input string to parse
    string input = "id+id*id";

    // Parse the input
    if (parser.parse(input)) {
        cout << "Input string is valid according to the grammar." << endl;
    } else {
        cout << "Input string is not valid according to the grammar." << endl;
    }

    return 0;
}
