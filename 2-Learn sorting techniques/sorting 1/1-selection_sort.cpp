#include <bits/stdc++.h>
using namespace std;

//find the minimun of all and place it at its correct position

// Selection sort works by repeatedly finding the minimum element from the unsorted part of the array and placing it at the beginning.  


vector<int> selectionSort(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (nums[j] < nums[mini])
            {
                mini = j;
            }
        }
        swap(nums[i], nums[mini]);
    }
    return nums;
}

// time complexity is O(n^2)
int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}