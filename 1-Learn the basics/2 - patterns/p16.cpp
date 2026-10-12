#include <iostream>
using namespace std;

void pattern16(int n)
{
    char start = 'A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << start << " ";
        }
        start++;
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    pattern16(n);
    return 0;
}