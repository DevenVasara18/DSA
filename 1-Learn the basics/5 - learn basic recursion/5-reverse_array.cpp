#include <bits/stdc++.h>
using namespace std;

void solve(int arr[],int left,int right){
    if(left>=right){
        return;
    }
    swap(arr[left],arr[right]);
    solve(arr,left+1,right-1);
}

void reverse(int arr[], int n)
{
    solve(arr,0,n-1);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverse(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}