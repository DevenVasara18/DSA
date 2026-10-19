/*
Approach
1. Sort the array in ascending order.
2. Traverse the sorted array and find every index where nums[i] == target.
3. Store those indices in the answer vector.
4. Return the answer.
*/

/*

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};

*/