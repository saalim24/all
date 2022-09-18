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
#define Saalim int t; cin>>t; while (t--) 
typedef long long ll;
typedef long double ld;
using namespace std;

int n; bool ok=false;
void solve(int x) 
{
   if (!(n%x))ok=true;
   else{
      if (x<1000)
      {
         solve(x*10+4);
         solve(x*10+7);
      }
   }  
}

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
   cin>>n;
   solve(4);
   solve(7);
   if (ok==true)
   cout<< "YES";
   else cout<<"NO";
}