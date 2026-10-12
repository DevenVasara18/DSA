#include <bits/stdc++.h>
using namespace std;

bool solve(string s,int n){
    if(n >= s.size()/2){
        return true;
    }
    if(s[n]!=s[s.size()-n-1]){
        return false;
    }
    return solve(s,n+1);
}

bool palindromeCheck(string &s)
{
    return solve(s,0);
}
int main()
{
    string s;
    cin >> s;
    
    cout<<palindromeCheck(s);
    return 0;
}