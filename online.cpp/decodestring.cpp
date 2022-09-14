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
   int n;
   cin>>n;
   unordered_set<int>star;
   char a[n];
   for (int i=0;i<n;i++)
   cin>>a[i];
   for (int i=0;i<n;i++)
   {
      if (a[i]=='0'&& (i==n-1|| a[i+1]!='0'))
      star.insert(i-2);
   }
   string res="";
   for (int i=0;i<n;i++)
   {
      if(star.count(i)==1)
      {
         int temp = 10*(a[i]-'0') + (a[i+1]-'0');
         res+='a' + temp-1;
         i+=2;
      }
      else res+='a' + (a[i]-'0'-1);

   }
   cout<< res << end;

   
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









