//author:Saalim24
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vt vector
#define endl "\n"
#define pb push_back
#define all(c) (c).begin(), (c).end()


void solve() 
{
   int a,b,c;
   cin>>a>>b>>c;
   ll ans = ceil((1.0*a/c))*ceil((1.0*b/c));
   cout<< ans;
}

int32_t main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}









