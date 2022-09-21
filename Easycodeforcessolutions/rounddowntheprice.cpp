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
   ll a,count{},temp;
   cin>> a;
   temp=a;
   while (temp!=0)
   {
      temp/=10;
      count++;      
   }
   ll pp=(pow(10,(count-1)));
   cout<< a - pp<<endl;
   

}

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
   Saalim
	solve();
}
