#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> countFrequencies(vector<int> &nums)
{
    unordered_map<int, int> mpp;

    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]]++;
    }

    vector<vector<int>> ans;

    for (auto it : mpp)
    {
        ans.push_back({it.first, it.second});
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

    vector<vector<int>> ans = countFrequencies(arr);

    for (auto v : ans)
    {
        cout << v[0] << " " << v[1] << endl;
    }

    return 0;
}