#include<stdio.h>
void sel(int arr[],int n)
{
    for (int i=0;i<n-1;i++)
    {
        int minind=i;
        for (int j=i+1;j<n;j++)
        {
            if (arr[j]<arr[minind])
            minind = j;
        }
        int temp =arr[i];
        arr[i]=arr[minind];
        arr[minind]=temp;
        
    }
}

int main()
{
    int arr[8]={5,4,8,12,3,99,0,34};
    sel(arr,8);
    for (int i=0;i<8;i++)
    printf("%d ",arr[i]);
}