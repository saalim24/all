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
    int a,b;
    cin>>a>>b;
    int sq;
    sq=a*b;
    if (sq%2==0)
    {
        cout<< sq/2;
    }
    else cout<< (sq-1)/2;
    
}

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}