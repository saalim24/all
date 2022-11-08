#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int h)
{
   int i = l - 1, j = h + 1;
   int p = arr[l];
   do
   {
      i++;
   } while (arr[i] < p);
   do
   {
      j--;
   } while (arr[j] > p);
   swap(arr[i], arr[j]);
   if (i >= j)
      return j;
}

void qsor(int arr[], int l, int h)
{
   int part = partition(arr, l, h);
   if (l < h)
   {
      qsor(arr, l, part);
      qsor(arr, part + 1, h);
   }
}

int main()
{
   int arr[]{5, 4, 3, 2, 1};
   qsor(arr, 0, 4);
   for (auto i : arr)
      cout << i;
}