/*
Approach
1. Sort the array in ascending order.
2. Traverse the sorted array and find every index where nums[i] == target.
3. Store those indices in the answer vector.
4. Return the answer.

Complexity
- Time: (O(nlog n)) — sorting dominates.
- Space: (O(log n)) auxiliary space typically used by sorting, excluding the output.

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

/*

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int smaller = 0, equal = 0;

        for (int num : nums) {
            if (num < target)
                smaller++;
            else if (num == target)
                equal++;
        }

        vector<int> ans;

        for (int i = smaller; i < smaller + equal; i++) {
            ans.push_back(i);
        }

        return ans;
    }
};
Complexity
- Time: (O(n))
- Auxiliary space: (O(1)), excluding the output vector.
*/