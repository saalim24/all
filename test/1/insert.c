#include<stdio.h>
int main()
{
    int size , pos, ele,i;
    printf("enter the array size ");
    scanf("%d",&size);
    int arr[size];
    printf("enter the array elements \n ");
    for (int i = 0; i < size; i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("enter the position ");
    scanf("%d",&pos);
    printf ("enter the elem to insert ");
    scanf("%d", &ele);

    for (i = size; i >= pos; i--)
    {
        arr[i]= arr[i-1];
    }
    arr[i]=ele;

    for (int i=0;i<size +1;i++)
    {
        printf("%d \n",arr[i]);
    }
}