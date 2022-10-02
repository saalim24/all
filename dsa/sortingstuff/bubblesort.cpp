//bubble sort is stable 
#include<iostream>
using namespace std;

void bubble (int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        bool sort=false;
        for (int j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                sort = true;
            }
        }
        if (sort==false )
        break;
    }
}

int main()
{
    int arr[]{5,4,3,2,1};
    bubble(arr,5);
    for(int i:arr)
    cout<< i;
    
}