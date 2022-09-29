/*
       Authored by Saalim24 at 24.September.2022 at 15:46:22
         

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
   int n; cin>>n;
   while (n--)
   {
      int n; cin>>n;
      if (n%2==0)
      cout<< n/2-1<<line;
      else cout<< n/2<<line;
   }
}

int main() 
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   solve();
}