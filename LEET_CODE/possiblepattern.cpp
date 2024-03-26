#include <iostream>
#include <vector>
using namespace std;

void combinationSumHelper(vector<int>& candidates, int target, int index, vector<int>& current, vector<vector<int>>& result) {
    if (target == 0) {
        result.push_back(current);
        return;
    }

    if (target < 0 || index == candidates.size())
        return;

    current.push_back(candidates[index]);
    combinationSumHelper(candidates, target - candidates[index], index, current, result);
    current.pop_back();

    combinationSumHelper(candidates, target, index + 1, current, result);
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> result;
    vector<int> current;
    combinationSumHelper(candidates, target, 0, current, result);
    return result;
}

int main() {
    vector<int> candidates {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> result = combinationSum(candidates, target);

    for (const auto& combination : result) {
        cout << "[";
        for (int i = 0; i < combination.size(); ++i) {
            cout << combination[i];
            if (i != combination.size() - 1)
                cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}
