/*
class Solution {
public:
    int solve(vector<int>& nums, int k, int index, int sum) {

        if (index == nums.size()) {
            if (sum == k) {
                return 1;
            }
            return 0;
        }

        int include = solve(nums, k, index + 1, sum + nums[index]);

        int exclude = solve(nums, k, index + 1, sum);

        return include + exclude;
    }

    int countSubsequenceWithTargetSum(vector<int>& nums, int k) {
        return solve(nums, k, 0, 0);
    }
};
*/