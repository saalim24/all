#include<iostream>
using namespace std;

const int n{4};
void summ(int mat[n][n])
{
    int sum{};
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i==j)
            sum += mat[i][j];

        }
    }    
    cout<< sum;
}
int main()
{
    int mat[n][n]{{1, 2, 3, 4},
                  {5, 6, 7, 8},
                  {9, 10,11,12},
                  {13,14,15,16}};
    summ(mat);
    


}