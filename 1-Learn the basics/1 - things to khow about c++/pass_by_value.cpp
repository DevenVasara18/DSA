#include <iostream>
#include<vector>
using namespace std;
int main()
{
    cout << "Hello";
    return 0;
}
class Solution
{
public:
    void reverse(vector<int> &arr)
    {
        int n = arr.size();
        int i = 0, j = n - 1;

        while (i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
};