//stable sort
#include<iostream>
using namespace std;

void merge(int a[],int b[],int n , int m)
{
    int i{},j{};
    while (i<n && j<m)
    {
        if (a[i]<=b[j])
        {
            cout<< a[i]<<" ";
            i++;
        }
        else
        {
            cout<< b[j]<<" ";
            j++;
        }
    }
    while(i<n)
    {
        cout<< a[i]<<" ";
        i++;
    }
    while (j<m)
    {
        cout<< b[j]<<" ";
        j++;
    }

}
int main()
{
    int p[]{6,12,18,24,30};
    int q[]{2,4,6,8,10};
    merge (p,q,5,5);
}