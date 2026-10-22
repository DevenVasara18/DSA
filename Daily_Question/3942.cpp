/*
Approach
The key insight is that reversing and rotating cannot produce an arbitrary permutation. The elements must follow the sorted order either clockwise or counterclockwise around the array.
1. Find zero: Locate the index of 0, because the sorted array must start with 0.
2. Check clockwise order: Starting from 0, verify that the elements increase as we move right, wrapping around the array.
3. Check counterclockwise order: Starting from 0, verify that the elements increase as we move left.
4. Calculate the minimum cost: For each valid direction, calculate the number of rotations needed, considering whether reversing the array is beneficial.
5. If neither direction is valid, return -1.
*/
/*

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int zero = find(nums.begin(), nums.end(), 0) - nums.begin();

        auto check = [&](int step) {
            for (int i = 1; i < n; i++) {
                int prev = (zero + (i - 1) * step + n) % n;
                int curr = (zero + i * step + n) % n;

                if (nums[prev] > nums[curr])
                    return false;
            }
            return true;
        };

        int ans = INT_MAX;

        if (check(1)) {
            ans = min(ans, zero);
            ans = min(ans, n - zero + 2);
        }

        if (check(-1)) {
            ans = min(ans, zero + 2);
            ans = min(ans, n - zero);
        }

        return ans == INT_MAX ? -1 : ans;
    }
};

*/
/*
Complexity
- Time: (O(n)), because we scan the array at most twice.
- Auxiliary space: (O(1)), because we only use a few variables and a lambda.
*/