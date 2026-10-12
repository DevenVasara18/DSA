#include <bits/stdc++.h>
using namespace std;

// Divide and merge

/*
Merge Sort is a divide and conquer algorithm.
It divides the array into two halves, sorts each half recursively, and then merges the two sorted
halves into one sorted array.

*/
vector<int> merge(vector<int> &nums, int l, int m, int r)
{

    int n1 = m - l + 1;
    int n2 = r - m;
    vector<int> left(n1), right(n2);
    for (int i = 0; i < n1; i++)
        left[i] = nums[l + i];

    for (int j = 0; j < n2; j++)
        right[j] = nums[m + 1 + j];
    
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
            nums[k++] = left[i++];
        else
            nums[k++] = right[j++];
    }

    while (i < n1)
        nums[k++] = left[i++];

    while (j < n2)
        nums[k++] = right[j++];
    
    return nums;
}


vector<int> mergeSort(vector<int> &nums, int l, int r)
{
    if (l >= r) return nums;

    int m = l + (r - l) / 2;
    mergeSort(nums, l, m);
    mergeSort(nums, m + 1, r);
    merge(nums, l, m, r);

    return nums;
}

/*
Time Complexity: O(n log n)
Array is divided into halves and merged at each level.
Space Complexity: O(n)
Extra space is used for temporary arrays during merging.*/
int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, arr.size() - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}