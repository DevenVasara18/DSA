/*
class Solution {
public:

    void solve(vector<int>& nums, int index, int sum, vector<int>& ans) {

        // All elements have been considered
        if (index == nums.size()) {
            ans.push_back(sum);
            return;
        }

        // Include nums[index]
        solve(nums, index + 1, sum + nums[index], ans);

        // Exclude nums[index]
        solve(nums, index + 1, sum, ans);
    }

    vector<int> subsetSums(vector<int>& nums) {

        vector<int> ans;

        solve(nums, 0, 0, ans);

        return ans;
    }
};
*/