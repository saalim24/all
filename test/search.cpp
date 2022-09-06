#include<iostream>
using namespace std;

int main()
{
    int n,i,elem,flg{};
    cout<< "enter size ";
    cin>> n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    cout<< "enter element ";
    cin>> elem;
    for(i=0;i<n;i++)
    {
        if (arr[i]==elem)
        {
            flg=1;
            break;
        }
    }
    if (flg)
    {
        cout<< "element found at position "<< i+1;
    }
    else cout<< "not found ";
}