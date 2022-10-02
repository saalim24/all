#include<iostream>
using namespace std;

int hoare(int arr[], int l , int h)
{
    int i=l-1;
    int j=h+1;
    int p = arr[l];

    while (true)
    {
        do{i++;}
        while(arr[i]<p);
        do{j--;}
        while(arr[j]>p);
        if(i>=j) return j;
        swap(arr[i],arr[j]);
    }

}

int main()
{
    int arr[]{99,57,73,74,86};
    int n=sizeof(arr)/sizeof(arr[0]);
    hoare(arr,0,n-1);
    for(auto i:arr)
    cout<< i <<" ";
}