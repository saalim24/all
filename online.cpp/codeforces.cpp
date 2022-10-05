/**
*    author:  saalim24
*    created: 05.October.2022 at 15:00:06
**/ 
#include<bits/stdc++.h>
#define endl "\n"
#define line "\n"
#define ll long long
using namespace std;

void solve()
{
   int n; cin>>n;
   int maxx=-1;
   int count{};
   int t; cin>>t;
   for (int i=1;i<(n*2);i++)
   {
      int temp; cin>> temp;
      if (i%2)
      count+=temp;
      if (!(i%2))
      count-=temp;
      maxx=max(count,maxx);
   }
   cout<< maxx;
}

int main() 
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   solve();
}
/*
   stuff you should look for
   * int overflow, array bounds
   * special cases (n=1?)
   * do smth instead of nothing and stay organized
   * WRITE STUFF DOWN
   * DON'T GET STUCK ON ONE APPROACH
*/