/*
class Solution {
public:

    void solve(vector<int>& candidates, int target, int index,
               vector<int>& current, vector<vector<int>>& ans) {

        // Target achieved
        if (target == 0) {
            ans.push_back(current);
            return;
        }

        // No more elements
        if (index == candidates.size()) {
            return;
        }

        for (int i = index; i < candidates.size(); i++) {

            // Avoid duplicate combinations
            if (i > index && candidates[i] == candidates[i - 1]) {
                continue;
            }

            // Since array is sorted
            if (candidates[i] > target) {
                break;
            }

            // Take the current element
            current.push_back(candidates[i]);

            // i + 1 because each element can be used only once
            solve(candidates, target - candidates[i],
                  i + 1, current, ans);

            // Backtrack
            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates,
                                         int target) {

        vector<vector<int>> ans;
        vector<int> current;

        sort(candidates.begin(), candidates.end());

        solve(candidates, target, 0, current, ans);

        return ans;
    }
};
*/