/*
The goal is to count how many reorderings of nums create the same BST as the original array.
1. The first element becomes the root of the BST.
2. Divide the remaining elements into two groups:
   - left: elements smaller than the root.
   - right: elements greater than the root.
3. Recursively calculate the valid reorderings for the left and right subtrees.
4. The left and right elements can be interleaved while preserving their relative order. There are \(\binom{n-1}{L}\) ways to arrange them, where \(L\) is the number of elements in the left subtree.
5. Multiply the left count, right count, and combinations. Subtract 1 at the end because the original ordering is not counted as a different reordering.
*/

/*

class Solution {
public:
    const long long MOD = 1e9 + 7;
    vector<vector<long long>> comb;

    long long solve(vector<int>& nums) {
        int n = nums.size();

        if (n <= 2)
            return 1;

        vector<int> left, right;

        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[0])
                left.push_back(nums[i]);
            else
                right.push_back(nums[i]);
        }

        long long l = solve(left);
        long long r = solve(right);

        long long ways = comb[n - 1][left.size()];

        return ways * l % MOD * r % MOD;
    }

    int numOfWays(vector<int>& nums) {
        int n = nums.size();

        comb.assign(n + 1, vector<long long>(n + 1, 0));

        for (int i = 0; i <= n; i++) {
            comb[i][0] = comb[i][i] = 1;

            for (int j = 1; j < i; j++) {
                comb[i][j] =
                    (comb[i - 1][j - 1] + comb[i - 1][j]) % MOD;
            }
        }

        return (solve(nums) - 1 + MOD) % MOD;
    }
};
*/