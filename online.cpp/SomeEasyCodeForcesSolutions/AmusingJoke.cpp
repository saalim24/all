/**
*    author:  saalim24
*    created: 29.September.2022 at 15:06:03
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
   string one,two,three;
   cin>>one>>two>>three;
   string a= one+two;
   sort(a.begin(),a.end());
   sort(three.begin(),three.end());
   if (a==three)
   cout<< "YES";
   else cout<< "NO";
}

int main() 
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   solve();
}