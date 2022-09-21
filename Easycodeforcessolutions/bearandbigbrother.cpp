//author:Saalim24
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vt vector
#define endl "\n"
#define pb push_back
#define all(c) (c).begin(), (c).end()

void solve() 
{
   int a,b,count{};
   cin>>a>>b;
   while (a<=b)
   {
      a = a * 3;
      b = b * 2;
      count++;
   }
   cout<< count;
}

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	solve();
}