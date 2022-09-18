/*Author: Saalim24
2022

 stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <unordered_set>
#define vt vector
#define line "\n"
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
   int len =str.size();
   unordered_set <char> s;
   for (int i=0;i<len;i++)
   {
      s.insert(str[i]);
   }
   int ans = s.size();
   if (ans%2==0)
   cout<< "CHAT WITH HER!";
   else cout<< "IGNORE HIM!";


}
 

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}