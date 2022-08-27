#include<iostream>
using namespace std;

bool pairs (int arr[],int n,int x,int si)
{
    int j=n-1;
    while (si<j)
    {
        if (arr[si]+arr[j]==x)      
            return true;
        else if (arr[si]+arr[j]<x)
        si++;
        else 
        j--;
        
    }
    return false;

}

bool trip(int arr[], int n, int x)
{
    for (int i=0;i<n-2;i++)
    {
        if(pairs(arr,n,x-arr[i], i+1))
        return true;
    }
    return false;
}
int main()
{
    int arr[]{1,4,6,9,15,30};
    cout<< boolalpha;
    cout<< trip(arr,6,39);
    
}