#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    int cmp = s1.compare(s2);
    if(cmp>0)
        cout << 1;
    else if(cmp<0)
        cout << -1;
    else
        cout << 0;
    return 0;
}