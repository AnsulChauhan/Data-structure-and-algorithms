#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> candidates {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> result = combinationSum(candidates, target);

    for (const auto& combination : result) {
        cout << "[";
        for (int i = 0; i < combination.size(); ++i) {
            cout << combination[i];
            if (i != combination.size() - 1)
                cout << ",     ede  ";
        }
        cout << "]" << endl;
    }
    void fun(){



        cout<<"";
    }
    return 0;
}



