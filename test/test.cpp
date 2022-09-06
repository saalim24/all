#include <iostream>
using namespace std;

const int m{3};
const int n{5};

void transpose(int mat[][n],int temp[][m])
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            temp [i][j]= mat [j][i];
        }
    }
}

int main()
{
    int mat[m][n]{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int temp[n][m];
    transpose(mat,temp);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;++j)
        {
            cout<< " " << temp [i][j];
        }
        cout<< endl;
    }
}