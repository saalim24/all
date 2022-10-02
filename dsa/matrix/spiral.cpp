#include<iostream>
using namespace std;

void spi (int mat[4][4],int r, int c)
{
    int top =0,low =r-1, left = 0, right=c-1;

    while (top<=low && left<=right)
    {
        for (int i=left; i<=right; i++)
        {
            cout<< mat[top][i] << endl;
        }top++;

        for (int i=top;i<=low;i++)
        {
            cout<< mat[i][right] << endl;
            
        }right --;
        if (top<=low)
        {
        for (int i=right;i>=left;i--)
        {
            cout<< mat[low][i]  << endl;
            
        }low --;
        }
        if (left<=right)
        {
    
        for (int i= low ; i>=top;i--)
        {
            cout<< mat[i][left] << endl;
           
        } left++;
        }
    }
}
int main()
    {
       int mat[4][4]{{1 ,2 ,3 ,4}
                    ,{5 ,6 ,7 ,8}
                    ,{9 ,10,11,12}
                    ,{13,14,15,16}};
       spi(mat,4,4);


    }
    
