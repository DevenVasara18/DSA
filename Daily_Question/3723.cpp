/*
Approach (Greedy):
1. If sum > 9 * num, return "" because the required digit sum is impossible.
2. Append as many 9s as possible, subtracting 9 from sum each time.
3. If any sum remains, append it as the next digit.
4. Fill the remaining positions with 0s.
5. Return the string.
Time Complexity: (O(num))
Space Complexity: (O(num))
*/
/*
class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9 * num) return "";

        string ans = "";

        while (sum >= 9) {
            ans += '9';
            sum -= 9;
            num--;
        }

        if (num > 0 && sum > 0) {
            ans += char('0' + sum);
            num--;
        }

        while (num > 0) {
            ans += '0';
            num--;
        }

        return ans;
    }
};
*/