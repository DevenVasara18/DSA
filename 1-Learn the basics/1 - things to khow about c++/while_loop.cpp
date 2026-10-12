#include <iostream>
using namespace std;
int main()
{
    cout << "Hello";
    return 0;
}

class Solution
{
public:
    int whileLoop(int d)
    {
        int num;
        if (d == 0)
            num = 10;
        else
            num = d;
        int count = 0, sum = 0;
        while (count < 50)
        {
            sum += num;
            num += 10;
            count++;
        }
        return sum;
    }
};