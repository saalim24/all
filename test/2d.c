#include<stdio.h>
int main()
{
    int r,c;
    printf("enter matrix dimensions ");
    scanf("%d %d",&r,&c);
    int mat[r][c];
    printf("enter elements ");
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        scanf("%d",&mat[i][j]);
    }

    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            printf("%d",mat[i][j]);
        }
        printf("\n");
    }
    

}