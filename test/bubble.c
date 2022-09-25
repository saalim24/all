#include<stdio.h>
#include<stdbool.h>
void bubble(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        bool sort =false;
        for (int j=0;j<n-1-i;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                sort=true;
            }
            

        }
        if (sort==false)   
        break;
    }
}
int main()
{
    int arr[6]={5,4,3,2,1,0};
    bubble(arr,6);
    for (int i=0;i<6;i++)
    printf("%d",arr[i]);
}