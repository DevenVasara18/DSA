#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n)
{
    int sum = 0;
    int Number = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + (lastDigit*lastDigit*lastDigit);
        n = n / 10;
    }
    if(sum == Number ) return true;
    else return false;
    
}
int main()
{
    int n;
    cin >> n;
    
    if(isArmstrong(n)) cout<< "It is Armstrong Number";
    else cout << "Not a Armstrong Number";
    return 0;
}