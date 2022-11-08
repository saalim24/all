#include<bits/stdc++.h>
using namespace std;

int sliding(int arr[],int n,int k)
{
    int curr{};
    int res=INT_MIN;
    for (int i=0;i<k;i++)
    {
        curr+=arr[i];
    }
    for (int i=k;i<n;i++)
    {
        curr+=(arr[i]-arr[i-k]);
        res=max(res,curr);
    }
    return res;
}

int main()
{
    int arr[]{1,2,3,4,5,-4,5,-8};
    cout<<sliding(arr,8,3);
}