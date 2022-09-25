#include<stdio.h>
int main()
{
    int size, elem,flag=0,i;
    printf("enter size ");
    scanf("%d",&size);
    int arr[size];
    printf("enter array elements \n");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    printf("enter element to del ");
    scanf("%d",&elem);
    for (i=0;i<size;i++)
    {
        if (arr[i]==elem)
        {
        flag=1;
        break;
        }
    }
    if (!flag)
    {
        printf("not found ");
    }
    else 
    {
        for(int j = i;j<size-1;j++)
        {
            arr[j]=arr[j+1];
        }
        for (int i = 0; i < size - 1; i++)
        {
            printf("%d \n", arr[i]);
    }
    }
}
    


    