#include<iostream>
#include <algorithm>
using namespace std;

int water (int arr[], int n)
{
    int lmax[n]{0};
    int rmax[n]{0};
    
    lmax[0]=arr[0];
    rmax[n-1]=arr[n-1];

    for (int i=1;i<n;i++)
    {
    lmax[i] = max(lmax[i-1],arr[i]);
    }

    for (int i=n-2;i>=0;i--)
    {
        rmax[i]= max(rmax[i+1],arr[i]);
    }

    int water{};
    for(int i=1;i<n-1;i++)
    {
    water = water + (min(rmax[i],lmax[i])-arr[i]);
    }
    return water;



}

int main ()
{
    int arr[]{5,0,6,2,3};
    cout<< water(arr,5);
}
//saalim - tourist 