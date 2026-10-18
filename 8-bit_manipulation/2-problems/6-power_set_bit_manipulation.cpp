/*
Approach (in short)
1. Calculate total subsets: An array of size \(n\) has \(2^n\) subsets.
2. Generate bitmasks: Iterate from 0 to 2^n - 1. Each number represents one subset.
3. Check each bit: If (mask & (1 << i)) is nonzero, include nums[i] in the current subset.
4. Store the subset: Add the completed subset to ans.

Complexity
- Time: \(O(n \cdot 2^n)\)
- Auxiliary space: \(O(n)\) for the current subset, excluding the output.
*/

/*
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int total = 1 << n;

        vector<vector<int>> ans;

        for (int mask = 0; mask < total; mask++) {
            vector<int> list;

            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    list.push_back(nums[i]);
                }
            }

            ans.push_back(list);
        }

        return ans;
    }
};
*/