//select sort is NOT stable
#include<iostream>
using namespace std;

void select(int arr[],int n)
{
    for (int i=0;i<n-1;i++)
    {
        int minind=i;
        for(int j=i+1;j<n;j++)
        {
            if (arr[j]<arr[minind])
            minind = j; 
            
        }
        swap (arr[i],arr[minind]);
    }
}
int main()
{
    int arr[]{54,34,2,26,1,5,7,67,4};
    select(arr,9);
    for(auto i:arr)
    cout<<i<< endl;
}