#include <bits/stdc++.h>
using namespace std;
int naive(int arr[],int l, int h, int p)
{
    int temp[h-l+1];
    int index{};
    for (int i = l; i <= h; i++)
    {
        if(arr[i]<arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }

    for (int i = l; i <= h; i++)
    {
        if (arr[i] == arr[p])
        {
            temp[index]=arr[i];
            index++;
        }
    }

    int res = l + index - 1;

    for (int i = l; i <= h; i++)
    {
        if (arr[i] > arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }
    for(int i=l;i<=h;i++)
    {
        arr[i]= temp[i-l];
    }
    return res;
}

int main()
{
    int arr[]{2,7,8,3,7};
    cout<< naive(arr,0,5,4);
}
