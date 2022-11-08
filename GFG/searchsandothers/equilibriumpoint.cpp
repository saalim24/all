#include<iostream>
using namespace std;
const int n=7;

int ro(int arr[],int n)
{
    int r{}, l{};
    for (int i = 0; i < n; i++)
    {
        r += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        r-=arr[i];
        if (r == l)
            return i;
        l+=arr[i];

    }
    return -1;
}

int main()
{
    int arr[]{1,2,3,4,3,2,1};
    cout<<ro (arr,n);
}