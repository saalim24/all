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
	int count {};
	int t; 
	cin>> t;
	while (t--)
	{
	string str;
	cin>>str;
	if (str[0]=='+' || str[2]=='+')
	{
		count ++;
	}
	else if (str[0]=='-' || str[2]=='-')
	count --;
	}
	cout << count ;



}

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
