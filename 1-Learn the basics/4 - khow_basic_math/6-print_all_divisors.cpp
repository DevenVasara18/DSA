#include <bits/stdc++.h>
using namespace std;

// brute force approach TC= O(n)
vector<int> divisors(int n)
{
    vector<int> ans;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            ans.push_back(i);
    }

    return ans;
}

//optimize
vector<int> divisors2(int n)
{
    vector<int> ans2;

    for (int i = 1; i * i <= n; i++)
    {

        if (n % i == 0)
        {

            ans2.push_back(i);

            if (i != n / i)
                ans2.push_back(n / i);
        }
    }

    sort(ans2.begin(), ans2.end());

    return ans2;
}
// can we avoid sorting 
// yes using two vectors
//Store the smaller divisors(i)
//in one vector.
//Store the larger divisors(n / i) in another vector.
//Print the first vector in order, then the second vector in reverse.
int main()
{
    int n;
    cin >> n;

    vector<int> ans = divisors(n);
    vector<int> ans2 = divisors2(n);

    for (int x : ans)
        cout << x << " ";
    for (int x : ans2)
        cout << x << " ";
}