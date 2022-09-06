#include<iostream>
using namespace std;

const int r=4, c=4;
void transpose (int mat[r][c])
{
    for (int i=0;i<c;i++)
    {
        for (int j=i+1;j<r;j++)
        {
            swap(mat[i][j],mat[j][i]);
        }
    }
}

int main()
{
    int arr[r][c] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
                     transpose(arr);
                      for (int i=0;i<r;i++)
                      {
                        for (int j=0;j<c;j++)
                        {
                            cout<< arr[i][j] <<" ";
                        }
                      }
}