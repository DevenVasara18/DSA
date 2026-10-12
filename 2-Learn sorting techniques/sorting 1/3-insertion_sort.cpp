#include <bits/stdc++.h>
using namespace std;

// takes an element and place it in its correct place

/*
Insertion sort builds the sorted array one element at a time, similar to how we sort playing cards in our hand.
The current element is inserted into its correct position in the already sorted part
*/
vector<int> insertionSort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int j=i;
        while (j>0 && nums[j-1]>nums[j])
        {
            swap(nums[j-1],nums[j]);
            j--;
        }
        
    }
    return nums;
}

/*
● Time Complexity:
○ Worst / Average: O(n²)
○ Best (already sorted): O(n)
● Space Complexity: O(1)
Sorting is done in-place.
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
    insertionSort(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}