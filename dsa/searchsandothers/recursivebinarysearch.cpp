#include<iostream>
using namespace std;

int recb (int arr[],int high, int low, int x)
{
    if (low>high)
    return -1;

    int mid = (low + high)/2;
    if (arr[mid]==x)
    return mid;
    else if (mid<x)
    recb (arr,high,mid+1,x);
    else recb(arr,mid-1,low,x);


    
}
int main()
{
    int arr[]{1,2,3,4,5,6};
    cout<<recb(arr,5,0,4);
}