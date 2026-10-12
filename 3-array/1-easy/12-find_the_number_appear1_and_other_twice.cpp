#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int n= nums.size();

    map<int,int> mpp;

    for (int i=0;i<n;i++)
    {
        mpp[nums[i]]++;
    }

    for(auto i : mpp){
        if(i.second == 1){
            return i.first;
        }
    }
    
    return -1;
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

    cout << singleNumber(arr);

    return 0;
}