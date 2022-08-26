#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()

void solve() 
{
    int n;
    cin>>n;
    int count{};
    int v[n]{};
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        v[i]=c;
    }
    int max= INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (v[i] <= max)
        {
            count++;
            max= v[i]; //836
        }
            
    }
    cout << count;
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
