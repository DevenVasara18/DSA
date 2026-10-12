/*
class Solution {
public:

    void solve(int k, int n, int start,
               vector<int>& current,
               vector<vector<int>>& ans) {

        // We selected exactly k numbers
        if (current.size() == k) {

            // Check whether their sum is n
            if (n == 0) {
                ans.push_back(current);
            }

            return;
        }

        // Try numbers from start to 9
        for (int i = start; i <= 9; i++) {

            // If i is greater than remaining sum,
            // no further number can be selected
            if (i > n) {
                break;
            }

            // Choose i
            current.push_back(i);

            // Move to i + 1 because
            // each number can be used only once
            solve(k, n - i, i + 1, current, ans);

            // Backtrack
            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {

        vector<vector<int>> ans;
        vector<int> current;

        solve(k, n, 1, current, ans);

        return ans;
    }
};
*/