//author:Saalim24
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vt vector
#define endl "\n"
#define pb push_back
#define all(c) (c).begin(), (c).end()

void solve() 
{
  string n;
  cin>> n;
  if (n.size()>1)
  {
  for (int i=0;i<n.size();i++)
  {
   for (int j=0;j<n.size()-2;j++)
   {
      if (n[j]>n[j+2])
      swap(n[j],n[j+2]);
   }
   
  }  
  cout<< n;
  }
  else cout<< n;
}
int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
   solve();

}
