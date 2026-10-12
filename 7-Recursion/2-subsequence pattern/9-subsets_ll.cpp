/*
class Solution {
public:

    void solve(vector<int>& nums, int index,
               vector<int>& current,
               vector<vector<int>>& ans) {

        // Every current subset is a valid answer
        ans.push_back(current);

        for (int i = index; i < nums.size(); i++) {

            // Skip duplicate elements at the same level
            if (i > index && nums[i] == nums[i - 1]) {
                continue;
            }

            // Take nums[i]
            current.push_back(nums[i]);

            // Move to next index because each array
            // element can be used only once
            solve(nums, i + 1, current, ans);

            // Backtrack
            current.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> current;

        // Required for detecting duplicates
        sort(nums.begin(), nums.end());

        solve(nums, 0, current, ans);

        return ans;
    }
};
*/