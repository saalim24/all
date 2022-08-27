#include<iostream>
using namespace std;

int peak(int arr[],int n)
{
    int low=0, high =n-1;
    while(low<=high)
    {
        int mid= (low+high)/2;

        if(mid==0||arr[mid-1]<=arr[mid] && mid ==n-1|| arr[mid+1] <= arr[mid] )
        {
            return mid;
        } 
        else if (arr[mid]<arr[mid+1])
        low=mid+1;
        else high = mid-1;
    }
    return -1;
    
}

int main()
{
    int arr[]{3,5,2,6,43,6,7,4,2,};
    cout<< peak (arr,9);
}