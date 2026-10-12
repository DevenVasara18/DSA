#include <bits/stdc++.h>
using namespace std;

int mostFrequentElement(vector<int> &nums)
{
    unordered_map<int, int> mpp;

    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]]++;
    }

    int maxfreq = 0;
    int ans = INT_MAX;
    for(auto it : mpp){
        if(it.second > maxfreq){
            maxfreq = it.second;
            ans = it.first;
        }
        if(it.second == maxfreq){
            ans = min(ans, it.first);
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout << mostFrequentElement(arr);

    
    return 0;
}