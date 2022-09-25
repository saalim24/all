/*
       Authored by Saalim24 at 21.September.2022 at 18:20:04
         

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

void srev(string& str)
{
    int n = str.length();
 
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);

}


void solve() 
{
    string s,ss;
    cin>>s>>ss;
    srev(ss);
    if (s==ss)
    cout<<"YES";
    else cout<<"NO";

}

int main() 
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   solve();
}