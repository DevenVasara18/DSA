#include <bits/stdc++.h>
using namespace std;

int GCD(int n1, int n2)
{
    int gcd = 1;
    for(int i = 1; i <= min(n1,n2); i++){
        if(n1 % i ==0 && n2 % i == 0){
            gcd = i;
        }
    }
    return gcd;
    // TC = O(min(n1,n2))
}
// Best Approach (Euclidean Algorithm)

// gcd(a,b) = gcd(a-b,b) where a>b

//observation

// gcd(a,b) = gcd(a%b,b) where a>b
int Euclidean_Algorithm(int n1, int n2)
{
    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
            n1 %= n2;
        else
            n2 %= n1;
    }

    if (n1 == 0)
        return n2;

    return n1;
}

    // or better code
    /*
    int GCD(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}
    */

int main()
{
    int n1,n2;
    cin >> n1 >> n2 ;

    cout<< GCD(n1,n2) << endl;
    cout << Euclidean_Algorithm(n1,n2); // TC = O(log(min(n1,n2)))
    return 0;
}