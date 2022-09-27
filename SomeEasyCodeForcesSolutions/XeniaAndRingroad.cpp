/**
*    author:  saalim24
*    created: 25.September.2022 at 15:26:32
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
   int n,m; cin>>n>>m;
   ll ans{};
   ll cur=1;
   for (int i=0;i<m;i++)
   {
      ll des; cin>>des;
      if (des>=cur)
      {
         ans+=des-cur;
         cur=des;
      }
      else
      {
         ans+= (n-cur)+des;
         cur=des;
      }
      
   }
   cout<< ans;
}

int main() 
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   solve();
}