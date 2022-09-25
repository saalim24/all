#include<stdio.h>
void merge(int arr[],int l, int m, int h)
{
    int n2 = h - m, n1 = m - l + 1;
    int left[n1],right[n2];
    for (int i=0;i<n1;i++)
        left[i] = arr[i + l];
    for (int j = 0; j < n2; j++)
        right[j] = arr[j + m + 1];

        int i=0,j=0,k=l;
        while (i<n1 && j<n2)
        {
            if (left[i] <= right[j])
                arr[k++] = left[i++];
            else
                arr[k++] = right[j++];
        }
        while (i<n1)
        arr[k++]=left[i++];
        while (j<n2)
        arr[k++]=right[j++];
}

void msort(int arr[],int l, int r)
{
    if (l<r){
    int mid = l + (r-l)/2;
    msort(arr,l,mid);
    msort(arr,mid+1,r);
    merge(arr,l,mid,r);}
}
int main()
{
    int arr[]={5,4,8,3,0,13,66,54,32,24,23};
    msort(arr,0,11);
    for (int i=0;i<11;i++)
    printf("%d ",arr[i]);
}