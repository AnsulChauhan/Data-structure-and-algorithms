#include <bits/stdc++.h>
using namespace std;

int minimumNumber(int n, string password) {
    // Define sets of characters
    string numbers = "0123456789";
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters = "!@#$%^&*()-+";

    // Initialize flags to check if each type of character is present
    bool has_digit = false;
    bool has_lower = false;
    bool has_upper = false;
    bool has_special = false;

    // Check each character in the password
    for (char c : password) {
        if (numbers.find(c) != string::npos) {
            has_digit = true;
        } else if (lower_case.find(c) != string::npos) {
            has_lower = true;
        } else if (upper_case.find(c) != string::npos) {
            has_upper = true;
        } else if (special_characters.find(c) != string::npos) {
            has_special = true;
        }
    }

    // Calculate the minimum number of characters needed to make the password strong
    int min_required = 0;
    if (!has_digit) min_required++;
    if (!has_lower) min_required++;
    if (!has_upper) min_required++;
    if (!has_special) min_required++;

    // Return the maximum of required characters and the difference between current length and minimum length
    return max(min_required, 6 - n);
}

int main() {
    string n_temp;
    getline(cin, n_temp);
    int n = stoi(ltrim(rtrim(n_temp)));
    string password;
    getline(cin, password);
    int answer = minimumNumber(n, password);
    cout << answer << "\n";
    return 0;
}
