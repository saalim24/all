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
   int t,n,w{};
   cin>>t>>n;
   int arr[t];
   for (int i=0;i<t;i++)
   {
      cin>>arr[i];
   }
   for (int i =0;i<t;i++)
   {
      if (arr[i]>n)
      w+=2;
      else if(arr[i]<=n)
      {
         w++;
      }
   }
   cout<< w;

}

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}