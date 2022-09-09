#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vt vector
//author:Saalim24
#define pb push_back
#define all(c) (c).begin(), (c).end()

void solve() 
{
    int arr[] = {3,-4, 2,-3,-1, 7,-5};
    int ans = INT_MAX;
    int sum=0;

    for (int i=0;i<7;i++)
    {
        if (arr[i]<ans)
        sum+=arr[i];
        if (arr[i]>0)
        sum =0;
        ans= min(ans,sum);
        
    }
    cout<< ans;
    

}

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
