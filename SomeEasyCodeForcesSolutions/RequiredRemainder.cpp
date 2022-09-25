/*
       Authored by Saalim24 at 22.September.2022 at 16:08:42
         

 stuff you should look for
   * int overflow, array bounds
   * special cases (n=1?)
   * do smth instead of nothing and stay organized
   * WRITE STUFF DOWN
   * DON'T GET STUCK ON ONE APPROACH
*/
#include<bits/stdc++.h>
#define vt vector
#define line "\n"
#define pb push_back
#define all(c) (c).begin(), (c).end()
typedef long long ll;
typedef long double ld;
using namespace std;

void solve() 
{
   int a,b,c;
   cin>>a>>b>>c;
   int h=(c-b)/a;
   cout<< h*a+b<<endl;
}

int main() 
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t; cin>>t; while (t--)
   solve();
}