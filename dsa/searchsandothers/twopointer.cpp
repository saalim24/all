#include<iostream>
using namespace std;

bool two(int arr[], int n, int x)
{
    int i = 0, j = n - 1;
    while (i < j) {
        if (arr[i] + arr[j] == x)
            return true;
        else if (arr[i] + arr[j] < x)
            i++;
        else j--;
    }
    return false;

}
int main()
{
    int arr[]{ 1,5,7,8,12,15,20};
    cout << boolalpha;
    cout << two(arr, 7, 6);

}