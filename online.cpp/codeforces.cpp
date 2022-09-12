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
   int mat[n+1][n+1];
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n; j++)
         cin >> mat[i][j];
   }

   int i, j;

   for (i = 0; i < n; i++)
   {
      for (j = 0; j < n; j++)
      {
         if (mat[i][j] == 1)
            break;
      }
      if (mat[i][j]==1)
      break;
   }
   int count{};

   if (i<2)
   count+= 2-i;
   if (i>2) 
   count +=i-2;

   if (j<2)
   count+= 2-j;
   if (j>2) 
   count +=j-2;

   cout<< count;

}

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}









