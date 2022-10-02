#include<iostream>
using namespace std;

void un (int a[],int b[], int m, int n)
{
    int i{}, j{};
    while (i<m && j<n)
    {
    
    if (i>0 && a[i]==a[i-1])
    {
        i++; 
    }
    if (j>0 && b[j]==b[j-1])
    {
        j++;
    }
    
    if (a[i]<b[j])
    {
        cout<< a[i];
        i++;
    }
    if (a[i]>b[j])
    {
        cout<< b[j];
        j++;
    }
    if (a[i]==b[j])
    {
        cout<< a[i];
        i++;
        j++;
    }
    }
    while (i<m)
    {
        cout<< a[i];
        i++;
    }
    while (j<n)
    {
        cout<< b[j];
        j++;
    }

}

int main()
{
    int arr[]{1,2,3,4,4,5};
    int arr1[]{1,1,2,3,6,7,8,9};
    un (arr,arr1,6,8);
}