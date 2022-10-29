/*
       Authored by Saalim24 at 23.September.2022 at 22:53:54
         

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
   map<int,int>m;
   for (int i=1;i<=n;i++)
   {
    int temp;
    cin>>temp;
    m[temp]=i;
   }
   for (int i=1;i<=n;i++)
   cout<< m[i]<<" ";

   

}

int main() 
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   solve();
}