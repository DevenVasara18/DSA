#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int count = 0, max_count = 0;
    for (int right = 0; right < nums.size(); right++)
    {
        if (nums[right] == 1)
        {
            count++;
        }
        else
        {
            max_count = max(max_count, count);
            count = 0;
        }
    }
    return max(max_count, count);
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

        cout << findMaxConsecutiveOnes(arr);

        return 0;
    }