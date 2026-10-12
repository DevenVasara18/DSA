#include <iostream>
using namespace std;

void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int start = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start++;
        }
        for (int j = 1; j <= 2*(n - i); j++)
        {
            cout<<" ";
        }
        int end = i;
        for (int j = 1; j <= i; j++)
        {
            cout<< end;
            end--;
            if(i == 1) break;
        }
        
        
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    pattern12(n);
    return 0;
}