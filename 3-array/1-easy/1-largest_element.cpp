#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &nums)
{
    int max=INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]>max){
            max=nums[i];
        }
    }
    

    return max;
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
    cout << largestElement(arr);

    return 0;
}

