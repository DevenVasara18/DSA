#include <bits/stdc++.h>
using namespace std;

// in every iteration the maximun place at the end

/*
Bubble sort repeatedly compares adjacent elements and swaps them if they are in the wrong
order.
After each pass, the largest element moves to the end, like a bubble rising up.
*/

vector<int> bubbleSort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = n - 1; i >= 1; i--)
    {
        int swap_count = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
                swap_count = 1;
            }
        }
        if (swap_count = 0)
        {
            break;
        }
    }

    return nums;
}

// time complexity O(n^2)
int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}