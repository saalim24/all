/*
       Authored by Saalim24 at 21.September.2022 at 18:39:38
         

 stuff you should look for
   * int overflow, array bounds
   * special cases (n=1?)
   * do smth instead of nothing and stay organized
   * WRITE STUFF DOWN
   * DON'T GET STUCK ON ONE APPROACH
*/
#include<bits/stdc++.h>
#define vt vector
#define line "\n"
#define pb push_back
#define all(c) (c).begin(), (c).end()
typedef long long ll;
typedef long double ld;
using namespace std;

bool valid(int year)
{
    int arr[10]{0};
    int count{};
    while (year)
    {
        arr[year%10]++;
        year/=10;
    }
    for (int i=0;i<10;i++)
    {
        if (arr[i]>1){
            return 0;
        }
    } 
    return 1;

}


void solve() 
{
   int n;
   cin>>n;
   if (valid(n)) 
   {
    while (1)
    {
        n++;
        if (valid(n))
        break;
    }
   }
   cout<<n;
  
    

}

int main() 
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   solve();
}