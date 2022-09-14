//author:Saalim24
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vt vector
#define endl "\n"
#define pb push_back
#define all(c) (c).begin(), (c).end()


const int n=5;
void solve() 
{
   int n;
   cin>>n;
   string str;
   cin>> str;
   int count {};
   for (int i=0;i<n-1;i++)
   {
      if (str[i]==str[i+1])
      count ++;
   }
   cout<< count;
}
int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}









