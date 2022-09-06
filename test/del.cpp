#include<iostream>
using namespace std;

int main()
{
    int i,elem, n , pos;
    cout<< "enter the size ";
    cin>> n;
    cout<< "enter the elements of array ";
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    cout<< "enter element ";
    cin>> elem;
    cout<< "enter position";
    cin>> pos;

    for(i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr [i]= elem;
    cout<< "the new array is ";

    for(auto i:arr)
    cout<< i;

}