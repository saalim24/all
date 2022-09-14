/*Author: Saalim24
2022
*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#define vt vector
#define endl "\n"
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define Saalim int t; cin>>t; while (t--) 
typedef long long ll;
typedef long double ld;
using namespace std;

void solve() 
{
   int as{},bs{},cs{};
   int n;
   cin>>n;
   for (int i=0;i<n;i++)
   {
      int a,b,c;
      cin>>a>>b>>c;
      as+=a; bs+=b; cs+=c;
   }
   if(!as&& !bs && !cs)
   cout<< "YES";
   else cout<< "NO";

}

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
