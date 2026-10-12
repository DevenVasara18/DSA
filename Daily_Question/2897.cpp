/*
/*
Approach (Short Pointers)
1. Count set bits at each bit position (0 to 30).
2. Greedily combine available set bits to maximize the sum of squares.
3. Construct k numbers by setting each bit in the first min(count[bit], k) numbers.
4. Calculate the sum of squares of these k numbers.
5. Return the result modulo 10^9 + 7.
*/
/*
class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        const long long MOD = 1000000007;
        vector<int> count(31, 0);

        for (int num : nums) {
            for (int bit = 0; bit < 31; bit++) {
                if (num & (1 << bit)) {
                    count[bit]++;
                }
            }
        }

        vector<long long> ans(k, 0);

        for (int bit = 0; bit < 31; bit++) {
            for (int i = 0; i < min(count[bit], k); i++) {
                ans[i] |= (1LL << bit);
            }
        }

        long long sum = 0;

        for (long long num : ans) {
            sum = (sum + num * num) % MOD;
        }

        return sum;
    }
};


*/