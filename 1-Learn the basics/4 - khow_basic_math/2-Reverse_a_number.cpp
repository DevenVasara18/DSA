#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    int reverseNum = 0;
    while (x > 0)
    {
        int lastDigit = x % 10;

        x = x / 10;

        reverseNum = (reverseNum * 10) + lastDigit;
    }
    return reverseNum;
}
int main()
{
    int x;
    cin >> x;

    cout << reverse(x);

    return 0;
}


// Leetcode Question 7 Reverse Number

// class Solution
// {
// public:
//     int reverse(int x)
//     {
//         // INT_MAX = 2147483647
//         INT_MIN = -2147483648 int ans = 0;
//         while (x != 0)
//         {
//             int digit = x % 10;
//             x = x / 10;
//             // positive overflow
//             if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7))
//                 return 0;

//             // negative overflow
//             if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && digit < -8))
//                 return 0;

//             ans = ans * 10 + digit;
//         }
//         return ans;
//     }
//     // TC = O(log(x)) and SC = O(1)
// };