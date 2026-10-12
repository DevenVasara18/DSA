#include <iostream>
using namespace std;

void pattern15(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char start = 'A';
        for (int j = i; j <= n; j++)
        {
            cout << start << " ";
            start++;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    pattern15(n);
    return 0;
}