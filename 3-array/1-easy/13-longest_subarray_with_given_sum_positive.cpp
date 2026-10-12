#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> &nums, int k)
{
    int n = nums.size();

    int left = 0;
    int sum = 0;
    int maxLen = 0;

    for (int right = 0; right < n; right++)
    {
        sum += nums[right];

        while (sum > k)
        {
            sum -= nums[left];
            left++;
        }

        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
    }

    return maxLen;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k;
    cin >> k;

    cout << longestSubarray(arr, k);
}