/**
*    author:  saalim24
*    created: 27.September.2022 at 21:42:27
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
   int n; cin>>n;
   char arr[n];
   set<char> s;
   for (int i =0;i<n;i++)
   {
      cin>>arr[i];

      s.insert(toupper(arr[i]));
   }
   if (s.size()==26)
   cout<< "YES";
   else cout<< "NO";

}

int main() 
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   solve();
}