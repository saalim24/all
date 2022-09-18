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
#include <set>
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
   int n;
   cin>>n;
   int e{},o{};
   vt<int>v;
   for (int i=0;i<n;i++)
   {
      int y;
      cin>>y;
      v.pb(y);
      if (y%2)
      o++;
      else e++;
   }
   if(o>e)
   {
      for (int i=0;i<v.size();i++)
      {
         if (v[i]%2==0)
         {
         cout<<i+1;
         break;
         }
      }
   }
    else
    {
      for (int i=0;i<v.size();i++)
      {
         if (v[i]%2!=0)
         {
         cout<< i+1;
         break;
         }
      }

   }
}
   


int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
