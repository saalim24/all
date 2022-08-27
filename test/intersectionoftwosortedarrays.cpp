#include<iostream>
using namespace std;

void two (int a[],int b[],int m , int n)
{
    int i{}, j{};
    while (i<m &&j<n)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            i++;
            continue;
        }
        if (a[i]<b[j])
        {
            i++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else 
        {
            cout<< a[i]<<" "; i++; j++;
        }


    }

    

}

int main()
{
    int arr1[]{1,2,3,4,4,5,5,5,6};
    int arr2[]{3,5,6,};
    two (arr1,arr2,9,3);
}