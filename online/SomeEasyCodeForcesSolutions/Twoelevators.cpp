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
   int a,b,c;
   cin>>a>>b>>c;
   int hh = abs(b-c)+c;
   if (hh<a)
   cout<< 2<< endl;
   else if (hh>a)
   cout<< 1 <<endl;
   else cout<< 3<<endl;

   
}
int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
   int t;
   cin>> t;
   while (t--)
	solve();

}









