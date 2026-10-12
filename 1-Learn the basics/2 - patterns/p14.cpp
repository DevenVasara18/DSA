#include <iostream>
using namespace std;

void pattern14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char start = 'A';
        for (int j = 1; j <= i; j++)
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
    pattern14(n);
    return 0;
}