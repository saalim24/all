/**
*    author:  saalim24
*    created: 02.October.2022 at 21:44:52
**/ 
#include<bits/stdc++.h>
#define endl "\n"
#define line "\n"
#define push push_back
using namespace std;

int replacement(vector<int> &positionof,int y) {
    int cnt=0;
    int p=y;
    while(p!=-1) {
        ++cnt;
        p=positionof[p];
        if(p==y) return cnt;
    }
    return -1;
}
void solve() {
    int n; cin>>n;
    string stringans; cin>>stringans;
    vector<int> positionof(26,0);

    int ref[26];
    for(int x=0; x<26; x++) positionof[x]=-1,ref[x]=1;
    for(int x=0; x<n; x++) {
        if(positionof[stringans[x]-'a']==-1)  {
            for(int y=0; y<26; y++) {
                if(ref[y]!=0 and y!=stringans[x]-'a') {
                    positionof[stringans[x]-'a']=y;
                    int z=replacement(positionof,y);
                    if(z!=-1 and z!=26)
                    continue;
                    else {
                        ref[y]=0;
                        break;
                    }
                }
            }
        }
        cout<<char(positionof[stringans[x]-'a']+'a');
    }
    cout<<endl;
}
signed main() {
   int T=1;
   cin >> T;
   while(T--) solve();
}

/*
   stuff you should look for
   * int overflow, array bounds
   * special cases (n=1?)
   * do smth instead of nothing and stay organized
   * WRITE STUFF DOWN
   * DON'T GET STUCK ON ONE APPROACH
*/