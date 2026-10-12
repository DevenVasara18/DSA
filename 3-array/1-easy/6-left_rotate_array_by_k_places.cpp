#include <bits/stdc++.h>
using namespace std;


void rotateArray(vector<int> &nums,int k)
{
    int i = 0, j = nums.size() - 1;

    for(int n=1;n<=k;n++){
        while (j >= 0)
        {
            swap(nums[i], nums[j]);
            j--;
        }
        j = nums.size() - 1;
    }
 
}

int main()
{
    int n;
    cin >> n;

    int k;
    cin >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    rotateArray(arr,k);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
