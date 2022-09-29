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
   string str;
   cin>>str;
   int count{1},ans{};
   for (int i=0;i<str.length()-1;i++)
   {
      if (str[i]==str[i+1])
      {
         count++;
         ans= max(count,ans);
      }
      else count =1;
      

   }
   if (ans>=7)
   cout<< "YES";
   else cout<< "NO";

}

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
