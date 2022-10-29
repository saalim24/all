#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[],int n)
{
   int s{},m{};
   for (int i{};i<n;i++)
   {
      s=max(arr[i],arr[i]+s);
      m=max(m,s);
   }
   return m;
}

int main()
{
   int arr[]{1,2,3,4,5,6,7,8,9};
   cout<< kadane(arr,9);
}