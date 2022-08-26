#include<iostream>
using namespace std;

int last(int arr[], int n, int x)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] < x)
            low = mid + 1;
        else if (arr[mid]>x)
            high = mid - 1;
        else {

            if (arr[mid] != arr[mid + 1] || mid == n - 1)
                return mid;
            else low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[]{ 1,2,3,4,5,5,5,5,6,7,8,8 };
    cout << last(arr, 12, 5);
}