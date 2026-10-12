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
    int forLoop(int low, int high)
    {
        int sum = 0;
        for (int i = low; i <= high; i++)
        {
            sum += i;
        }
        return sum;
    }
};