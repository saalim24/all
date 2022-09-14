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
   int bananas,money,price1;
   cin>> price1>>money>>bananas;
   int loan= price1;
   for(int i=2;i<bananas+1;i++)
   {
      loan+= price1*i;
   }
   int s =loan - money;
   if(s>0)
   cout<< s;
   else cout<< 0;
   

}

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	solve();
}