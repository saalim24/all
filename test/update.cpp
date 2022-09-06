#include<iostream>
using namespace std;
int main()
{
    int elem,n,rep,flg{};
    cout<< "enter size ";
    cin>>n;
    int arr[n];
    cout<< "enter elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<< "enter elem to be replaced  ";
    cin>> elem;
    cout<< "enter the elem to insert ";
    cin>> rep;

    for(int i=0;i<n;i++)
    {
        if (arr[i]==elem)
        {
            arr[i]=rep;
            flg=1;
            break;
        }
    }
    if (flg)
    {
        cout<< "element replaced "<<endl;
        for (auto i:arr)
    cout<< i << endl;
    }
    else cout<< elem<< " not found ";
    
}