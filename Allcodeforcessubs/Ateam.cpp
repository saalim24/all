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
    int t;
    cin>>t;
    int count{};
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if (a+b+c>=2)
        {
            count++;
        }
        
        
        
    }
    cout<< count;


}

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}