#include <bits/stdc++.h>
using namespace std;

/*
Quick Sort is a divide and conquer sorting algorithm.
It works by selecting a pivot element, placing it at its correct position, and then recursively
sorting the elements on the left and right of the pivot.

Unlike merge sort, quick sort sorts the array in-place

*/
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}
void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

/*
 Time Complexity:
 Best Case: O(n log n) (balanced partitions)
 Average Case: O(n log n)
 Worst Case: O(n²) (already sorted array with bad pivot choice)
Worst case happens because the pivot always ends up at one extreme, leading to highly
unbalanced partitions.

Space Complexity: O(log n)
Due to recursion stack in the average case.
*/
int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr, 0, arr.size() - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
Quick sort is not stable.
● It is usually faster in practice than merge sort due to low constant factors.
● Pivot selection plays a very important role in performance.
● Common pivot choices: first element, last element, random element, median of three.
*/