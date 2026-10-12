#include <iostream>
using namespace std;

void pattern11(int n)
{
    for (int i = 1; i <= n ; i++)
    {
        int start = 1;
        if (i % 2 == 0)
        {
            start=0;
        }
        else{
            start=1;
        }
        
        for (int j = 1; j <= i; j++){
            cout << start;
            start = 1- start;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    pattern11(n);
    return 0;
}