#include <bits/stdc++.h>
using namespace std;


    void rotateArrayByOne(vector<int> &nums)
    {
        int i = 0,j =nums.size()-1;
        while(j >= 0){
            swap(nums[i],nums[j]);
            j--;
        }
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

    rotateArrayByOne(arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
