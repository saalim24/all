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
 ll a,b;
		cin>>a>>b;
		ll tmp=a,ans=-1;
		ll mov=0;
		if(b < a) 
      {
			while(tmp>=b) 
         {
				if(tmp==b) 
            {
					ans=(mov+2)/3;
					break;
				}
				mov++;
				if(tmp%2) break;
				tmp/=2;
			}
		} else 
      {
			for(ll tmp=a; tmp<=b; tmp*=2)
          {
				if(tmp==b)
            {
				 ans=(mov+2)/3;
				 break;
				}
				mov++;
			}
		}
		cout<<ans<<endl;
	}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}
