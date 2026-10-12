#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr, int n)
{
    if (n <= 1)
        return;

    insertionSort(arr, n - 1);

    int last = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = last;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    insertionSort(arr, n);

    for (int x : arr)
        cout << x << " ";

    return 0;
}