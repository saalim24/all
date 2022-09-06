#include<stdio.h>
int main()
{
    printf("enter the array size ");
    int size;
    scanf("%d",&size);
    int arr[size];
    printf("enter %d array elements \n",size);
    for (int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for (int i=0;i<size;i++)
    {
        sum+= arr[i];
    }
    printf("the sum is %d",sum);


}