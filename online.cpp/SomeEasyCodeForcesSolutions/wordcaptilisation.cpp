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
  string str;
  cin>> str;
  if (str[0]>96&& str[0]<123)
  str[0] -=32;
  cout<< str;
}
int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
   solve();

}
