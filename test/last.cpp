#include<iostream>
using namespace std;

int main()
{
    int i,n,elem;
    cout<< "enter size ";
    cin>> n;
    int arr[n+1];
    cout<< "enter "<< n << " elements";
    for (i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    cout<< "enter last element ";
    cin>> elem;
    arr[i]= elem;

    cout<< "the new array is ";
    for (int i=0;i<n+1;i++)
    {
        cout<< arr[i] << " ";
    }



}