/**
*    author:  saalim24
*    created: 24.September.2022 at 16:05:12
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
   int n,count{};
   for(int i=0;i<100;i++)
   {
      cin>>n;
      count++;
   }
   cout<< count;
}

int main() 
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   solve();
}