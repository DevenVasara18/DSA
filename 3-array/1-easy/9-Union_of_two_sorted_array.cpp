#include <bits/stdc++.h>
using namespace std;

vector<int> unionArray(vector<int> &nums1, vector<int> &nums2)
{
    int n = nums1.size();
    int m = nums2.size();

    int i = 0, j = 0;
    vector<int> Union;

    while (i < n && j < m)
    {
        if (nums1[i] <= nums2[j])
        {
            if (Union.empty() || Union.back() != nums1[i])
                Union.push_back(nums1[i]);

            i++;
        }
        else
        {
            if (Union.empty() || Union.back() != nums2[j])
                Union.push_back(nums2[j]);

            j++;
        }
    }

    while (i < n)
    {
        if (Union.empty() || Union.back() != nums1[i])
            Union.push_back(nums1[i]);

        i++;
    }

    while (j < m)
    {
        if (Union.empty() || Union.back() != nums2[j])
            Union.push_back(nums2[j]);

        j++;
    }

    return Union;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    vector<int> arr2(m);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < m; i++)
        cin >> arr2[i];

    vector<int> Union = unionArray(arr, arr2);

    for (auto it : Union)
        cout << it << " ";

    return 0;
}