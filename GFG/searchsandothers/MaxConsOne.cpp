#include<iostream>
using namespace std;

int one(int arr[], int n)

{
    int count{};
    int ans{};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            count++;
        else count=0;
        if (count > ans)
            ans = count;
    }
    return ans;


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int array[]{ 1,0,0,1,1,1,0,1,1,0,0,1,1,1,1,1,0,1,1,0,1 };
    cout << one(array, 20);

}