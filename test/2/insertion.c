#include<stdio.h>

void ins(int arr[],int n)
{
    for (int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while (j>=0 && key<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int arr[]={4,5,6,3,57,8,6,5,555};
    ins(arr,9);
    for (int i=0;i<9;i++)
    printf("%d ",arr[i]);
}