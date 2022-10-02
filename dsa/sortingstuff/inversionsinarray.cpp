#include<iostream>
using namespace std;

int inv(int arr[],int l,int m,int high)
{
    int n1=m-l+1;
    int n2 = high-m;
    int right[n1];
    int left[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        right[i]=arr[m+1+i];
    }
    int i{},j{},k=l;
    int res{};
    while (i<n1 && j<n2)
    {
        if (left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=right[j];
            j++;
            res+=n1-i;
            k++;
            
        }
        
    }
    while (i<n1)
    {
        arr[k]=right[i];
        i++;
        k++;
    }
    while (j<n2)
    {
        arr[k]=left[j];
        j++;
        k++;
    }
    return res;

}
int main()
{
    int arr[]{2,4,1,3,5};
    cout<< inv(arr,0,5,10);
    
}