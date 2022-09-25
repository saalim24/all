/*Author: Saalim24
2022

 stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<string> 
#define line "\n"
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);

    string str;
    cin>> str;
    bool cap = true;int n=str.length();
    for (int i=1;i<n;i++)
    {
        if (str[i]>='a'&& str[i]<='z')
        cap = false;
    }
    if (cap)
    {
        for (int i=0;i<n;i++)
        {
            if (str[i]>='a'&& str[i]<='z')
            str[i]= toupper(str[i]);
            else str[i]=tolower(str[i]);
        }
    }
    cout<< str;

   

    

}