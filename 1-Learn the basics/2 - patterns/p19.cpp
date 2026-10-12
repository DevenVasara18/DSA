#include <iostream>
using namespace std;

void pattern19(int n)
{
    for (int i = 1; i <= 2 * n; i++)
    {
        int stars, spaces;

        if (i <= n)
        {
            stars = n - i + 1;
            spaces = 2 * (i - 1);
        }
        else
        {
            stars = i - n;
            spaces = 2 * (2 * n - i);
        }

        // Left stars
        for (int j = 1; j <= stars; j++)
            cout << "*";

        // Middle spaces
        for (int j = 1; j <= spaces; j++)
            cout << " ";

        // Right stars
        for (int j = 1; j <= stars; j++)
            cout << "*";

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern19(n);
}