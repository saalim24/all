//author:Saalim24
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vt vector

#define pb push_back
#define all(c) (c).begin(), (c).end()
#define endl "\n"

void solve() 
{
    map<string,int> m;
    int t;
    cin>> t;
    while (t--)
    {
    string s;
    cin>> s;

    if (m[s]==0)
    {
        cout << "OK" << endl;
        
    }
    else 
    cout<< s << m[s] << endl;
    m[s]++;
    }
    

}

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
}