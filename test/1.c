#include<stdio.h>
int main()
{
    int arr[10];
    printf ("enter the elements of array \n");
    for(int i=0;i<10;i++)
    {
        scanf ("%d",&arr[i]);
    }
    printf ("the elements in array are \n");
    for (int i=0;i<10;i++)
    {
        printf("%d \n",arr[i]);
    }



}