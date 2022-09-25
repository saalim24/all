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
   int a, b;
   cin>>a>>b;
   int arr[a+1];
   
   for (int i=1;i<=a;i++)
   {
      cin>> arr[i];
   }
   
   
   int count{};

   for (int i=1;i<=a;i++)
   {
      if (arr[i]>=arr[b]&&arr[i]>0)
      count++;
   }
   cout<< count;
   

}

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
