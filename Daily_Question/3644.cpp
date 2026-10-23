/*
Any element where nums[i] != i is in the wrong position and must be moved.
1. Initialize ans = -1, which has all bits set to 1 in its integer representation.
2. Traverse the array.
3. Whenever nums[i] != i, perform ans &= nums[i].
4. Return max(ans, 0). If the array is already sorted, ans remains -1, so the result is 0.
*/
/*

class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int ans = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != i) {
                ans &= nums[i];
            }
        }

        return max(ans, 0);
    }
};

*/
/*
Complexity
- Time: (O(n)) — one traversal.
- Auxiliary space: (O(1)) — only one extra variable.
*/