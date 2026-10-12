#include <bits/stdc++.h>
using namespace std;

int countDigit(int n)
{
    int count = 0;
    while(n > 0){

        count++;
        n = n / 10;
    }
    return count;
}

// other method

int countDigit2(int n)
{
    int count = (int)(log10(n) + 1); // example log(7789)=3.8... and when we add 1 it becomes 4.8 and we take the int part of it it gives number of digits 
    return count;
}
// time complexity of this is O(log10(n)) becz we divide the number by 10 every time 
// similarly if we divide by 5 it becomes log5(n) and so on...
int main(){
    int n;
    cin>> n;
    cout << countDigit(n) << endl;
    cout << countDigit2(n);
    return 0;
}