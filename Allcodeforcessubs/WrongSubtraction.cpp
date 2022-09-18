/*Author: Saalim24
2022
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#define vt vector
#define endl "\n"
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define Saalim ll t; cin>>t; while (t--) 
typedef long long ll;
typedef long double ld;
using namespace std;

void solve()
{
  int a,b;
  cin>>a>>b;
  while (b)
  {
   if (a%10)
   {
      a-=1;
      b--;
   }
   else {
      a/=10;
      b--;
   }
  }
  cout<< a;
}

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}