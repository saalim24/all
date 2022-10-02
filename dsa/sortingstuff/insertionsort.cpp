//insertion sort is stable
#include<iostream>
using namespace std;

void ins(int arr[],int n)
{
    for (int i=1;i<n;i++)
    {
        int key = arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr [j+1] = arr[j];
            j--;
        }
        arr[j+1]=key;

    }
}

int main()
{
    int arr[]{3,2,5,6,77,34,1};
    ins (arr,7);
    for (auto i: arr)
    cout<< i<<endl;
}