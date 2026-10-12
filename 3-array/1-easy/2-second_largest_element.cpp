#include <bits/stdc++.h>
using namespace std;

int secondLargestElement(vector<int> &nums)
{
    int largest = INT_MIN, slargest = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > largest)
        {
            slargest = largest;
            largest = nums[i];
        }
        else if (nums[i] < largest && nums[i] > slargest)
        {
            slargest = nums[i];
        }
    }
    if (slargest == INT_MIN)
        return -1;
    return slargest;
    return slargest;
}
int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << secondLargestElement(arr);

    return 0;
}
