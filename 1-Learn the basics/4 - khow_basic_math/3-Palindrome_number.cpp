#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    int reverseNum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;

        n = n / 10;

        reverseNum = (reverseNum * 10) + lastDigit;
    }
    return reverseNum;
}

bool isPalindrome(int n)
{
    int rev = reverse(n);
    if( rev == n ) return true;
    else return false;

}
int main()
{
    int n ;
    cin >> n;

    if (isPalindrome(n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}