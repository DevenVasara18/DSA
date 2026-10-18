/*
Approach
1. Handle overflow: If dividend = INT_MIN and divisor = -1, return INT_MAX.
2. Determine the sign: The result is positive when both numbers have the same sign.
3. Convert to positive values: Use long long to safely handle INT_MIN.
4. Find the largest power of 2: Repeatedly left-shift the divisor until the next shifted value exceeds the remaining dividend.
5. Update the quotient: Add \(2^{count}\) using quotient += (1LL << count).
6. Subtract and repeat: Subtract the shifted divisor from the dividend until the remainder is smaller than the divisor.
7. Apply the sign and return the result.

Time complexity: (O((log |n|)^2)) in the worst case for this repeated-shifting implementation.
Space complexity: (O(1)).
*/

/*
class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == divisor) return 1;

        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        bool sign = (dividend < 0) == (divisor < 0);

        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);

        long long quotient = 0;

        while (n >= d) {
            int count = 0;

            while (n >= (d << (count + 1))) {
                count++;
            }

            quotient += (1LL << count);
            n -= (d << count);
        }

        return sign ? quotient : -quotient;
    }
};
*/