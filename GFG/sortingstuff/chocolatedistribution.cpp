#include <bits/stdc++.h>
using namespace std;

int choc(int arr[], int n, int m)
{
    sort(arr, arr + n);
    int res = arr[m - 1] - arr[0];
    for (int i = 1; (i + m-1) < n; i++)
    {
        res = min(res, arr[i + m-1] - arr[0]);
    }
    return res;
}

int main()
{
    int arr[]{1, 2, 3, 4, 5, 6};
    cout << choc(arr, 6, 2);
}