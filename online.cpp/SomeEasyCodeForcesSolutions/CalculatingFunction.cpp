/**
*    author:  saalim24
*    created: 28.September.2022 at 21:24:33
**/ 
         
/*
   stuff you should look for
   * int overflow, array bounds
   * special cases (n=1?)
   * do smth instead of nothing and stay organized
   * WRITE STUFF DOWN
   * DON'T GET STUCK ON ONE APPROACH
*/
#include<bits/stdc++.h>
#define line "\n"
#define pb push_back
#define all(c) (c).begin(), (c).end()
typedef long long ll;
typedef long double ld;
using namespace std;

void solve() 
{
   long long n; cin>>n;
   long long ans{};
   if (!(n%2))
   cout<< n/2;
   else cout<< ((n-1)/2) -n;


}

int main() 
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   solve();
}