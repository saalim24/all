#include<iostream>
#include<algorithm>
using namespace std;

int subarr (int arr[],int n)
{
    int count[n]{};
    int maxending=arr[0];
    int res= arr[0];

    for (int i=0;i<n;i++)
    {
        maxending = max(arr[i], (maxending + arr[i])) ;
        res = max(maxending,res);

    }
    return res;


}

int main ()
{
    int array[]{-5,1,-2,3,-1,2,-2};
    cout<< subarr(array,7 );
} //saalim