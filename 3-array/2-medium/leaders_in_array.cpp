/*
class Solution {
public:
    vector<int> leaders(vector<int>& nums) {

        int n = nums.size();

        vector<int> ans;

        int maxRight = nums[n - 1];

        ans.push_back(maxRight);

        for (int i = n - 2; i >= 0; i--) {

            if (nums[i] > maxRight) {

                ans.push_back(nums[i]);
                maxRight = nums[i];
            }
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
*/