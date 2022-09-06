#include<stdio.h>
int main()
{
    int size, elem,flag,i;
    printf("enter size ");
    scanf("%d",&size);
    int arr[size];

    printf("enter elements ");
    for (int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    printf("enter element to be searched ");
    scanf("%d",&elem);
    for (i=0;i<size;i++)
    {
        if (arr[i]==elem)
        {
            flag++;
            break;
        }
    }
    if (!flag)
    {
        printf("not found ");
    }
    else printf("found at %d",i+1);


}