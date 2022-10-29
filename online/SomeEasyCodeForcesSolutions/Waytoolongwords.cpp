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
    string str;
    cin>> str;
    if (str.length()>10)
    {
        cout<< str[0];
        cout<< str.length()-2;
        cout<< str.back();
        cout<< endl;
    }
    else cout<< str << endl;


}

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while (t--)
	solve();
}