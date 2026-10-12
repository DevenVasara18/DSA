#include <iostream>
using namespace std;

void pattern20(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars, spaces;

        if (i <= n)
        {
            stars = i;
            spaces = 2 * (n - i);
        }
        else
        {
            stars = 2 * n - i;
            spaces = 2 * (i - n);
        }

        // Left stars
        for (int j = 1; j <= stars; j++)
            cout << "*";

        // Spaces
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
    pattern20(n);
}