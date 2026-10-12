/*
class Solution {
public:
    int solve(string& s, int index, long long num, int sign) {

        if (index >= s.size() || !isdigit(s[index])) {
            return sign * num;
        }

        int digit = s[index] - '0';

        if (num > (INT_MAX - digit) / 10) {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }

        num = num * 10 + digit;

        return solve(s, index + 1, num, sign);
    }

    int myAtoi(string s) {
        int index = 0;

        while (index < s.size() && s[index] == ' ')
            index++;
        int sign = 1;

        if (index < s.size() && (s[index] == '+' || s[index] == '-')) {

            if (s[index] == '-')
                sign = -1;

            index++;
        }
        return solve(s, index, 0, sign);
    }
};
*/