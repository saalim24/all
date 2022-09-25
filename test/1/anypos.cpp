#include<iostream>
using namespace std;

int main()
{
    int i{}, elem{}, n{}, pos{};
    cout<< "enter size ";
    cin>> n;
    int arr[n+1];
    cout<< "enter elments of array ";
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    cout<< "enter element ";
    cin>> elem;
    cout<< "enter position ";
    cin>> pos;
    for(i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[i]=elem;
    for (int i=0;i<n+1;i++)
    {
        cout<< arr[i]<< " ";
    }
    

}