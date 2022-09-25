#include<stdio.h>
int main()
{
    int size,count=0;
    printf("size of array ");
    scanf("%d", &size);
    int arr[size];
    printf("enter array elements \n");
    for (int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        if (arr[i])
        {
            count ++;
        }
    }
    printf("no. of non zero elements are %d", count);
}