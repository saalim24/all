/*
       Authored by Saalim24 at 23.September.2022 at 19:16:48
         

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
   int n;
   cin>>n;
   vector<int>v(n);
   int sum{};
   for(int i=0;i<n;i++)
   {
      cin>>v[i];
      sum+=v[i];
   }
   if (sum)cout<<"HARD";
   else cout<<"EASY";
}

int main() 
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   solve();
}