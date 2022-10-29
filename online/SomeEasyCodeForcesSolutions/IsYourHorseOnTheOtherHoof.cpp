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
#include <unordered_set>
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
   unordered_set<int>u;
   for (int i=0;i<4;i++)
   {
      int g; cin>>g;
      u.insert(g);
   }
   cout<< 4-u.size();


}

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}