/**
*    author:  saalim24
*    created: 25.September.2022 at 15:41:28
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
   string a,b;
   cin>>a>>b;
   vector<int>v;
   for (int i=0;i<a.length();i++)
   {
      if (a[i]!=b[i])
      {
         v.pb(1);
      }
      else v.pb(0);
   }
   for (auto i:v)
   cout<<i;

}

int main() 
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   solve();
}