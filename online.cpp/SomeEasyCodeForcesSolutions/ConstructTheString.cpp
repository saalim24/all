/**
*    author:  saalim24
*    created: 24.September.2022 at 16:13:08
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
   int t; cin>>t;
   while (t--)
   {
      int a,b,c;
      cin>>a>>b>>c;
      for (int i=0;i<a;i++)
      {
         cout<< char((i%c)+97);
      }
      cout<< line;
   }
}

int main() 
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   solve();
}