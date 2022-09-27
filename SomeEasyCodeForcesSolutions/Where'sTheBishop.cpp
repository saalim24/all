/**
*    author:  saalim24
*    created: 26.September.2022 at 19:31:36
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
   char arr[9][9];
   for (int i=1;i<=8;i++)
   {
     for (int j=1;j<=8;j++)
     {
        cin>>arr[i][j];
     }
   }
   for (int i=1;i<=8;i++)
   {
    for (int j=1;j<=8;j++)
    {
       if (arr[i][j]=='#' && arr[i-1][j-1]=='#'&& arr[i+1][j-1]=='#')
        cout<< i << ' ' << j << line; 
    }
   }
}

int main() 
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t; cin>>t; while (t--)
   solve();
}