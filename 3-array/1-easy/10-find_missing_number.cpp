#include <bits/stdc++.h>
using namespace std;

    int missingNumber(vector<int> &nums)
    {

        int n = nums.size();

        int ans = n;

        for (int i = 0; i < n; i++)
        {
            ans ^= i;
            ans ^= nums[i];
        }

        return ans;
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

    cout << missingNumber(arr);

    return 0;
}
