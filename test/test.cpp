#include<iostream>
using namespace std;

int bs(int arr[],int n, int x)
{
    int low=0,high=n;
    while (low<=high)
    {
        int mid=(low+high)/2;        
    if (x==arr[mid])
    return mid;
    else if (x<arr[mid])
        high = mid-1;
    else low = mid +1;
    }
    return -1;

}

int main()
{
    int arr[]{1,3,4,6,7,8,12,45};
    cout<< bs(arr,8,7);

}