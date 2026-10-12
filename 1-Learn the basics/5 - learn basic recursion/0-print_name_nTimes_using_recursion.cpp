#include <bits/stdc++.h>
using namespace std;

void printName(int i,int n, string name)
{
    if ( i > n)
    {
        return;
    }
    cout << name << endl;
    printName(i+1,n,name);
}
int main()
{
    string name = "Deven";
    int n;
    cin >> n;
    printName(1,n, name);
    return 0;
}