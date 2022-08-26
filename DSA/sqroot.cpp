#include<iostream>
using namespace std;

int floor(int x)
{
    int low = 1, high = x;
    int ans = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int midsq = mid * mid;
        if (midsq == x)
            return mid;
        else if (midsq > x)
            high = mid - 1;
        else {
            low = mid + 1;
            ans = mid;

        }
        
    }
    return ans;
}
    int main()
    {
        cout << floor(16);
    }