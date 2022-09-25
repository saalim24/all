#include<iostream>
using namespace std;
int main()
{
    int i;int elem;int n;
    cout<< "enter the size ";
    cin>> n;
    int arr[n+1];
    cout<< "enter " <<n<< " elements";
    for (int i=1;i<n+1;i++)
    {
        cin>> arr[i];
    }
    cout<< "enter the beginning element ";
    cin>> arr[0];
    cout<< "the new array is : ";
    for(int i=0;i<n+1;i++)
    cout<< arr[i];
    }
    