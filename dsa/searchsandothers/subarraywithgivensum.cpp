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
    int n; 
    cin>>n; 
    int sum; 
    cin>>sum;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int s{},curr=arr[0];
    for(int i=1;i<n;i++)
    {
        curr+=arr[i];
        while (curr>sum)
        {
            curr-=arr[s];
            s++;
        }
        if (curr==sum)   
        {
        cout<<s<<" "<<i;
        break;
        }
    }
}

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}