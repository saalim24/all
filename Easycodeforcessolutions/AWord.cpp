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
   ios::sync_with_stdio(false);
   cin.tie(0); 
   string str; cin>> str;
   int count{},len=str.length();
   int COUNT{};
   for (int a =0;a<len;++a)
   {
      if (str[a]>='a' && str[a]<='z'){
         count++; 
      }
   }
   for (int a =0;a<len;++a)
   {
      if (str[a]>='A' && str[a]<='Z'){
         COUNT++; 
      }
   }


   if (count >=COUNT)
   transform(str.begin(),str.end(),str.begin(),::tolower);
   else {
   transform(str.begin(),str.end(),str.begin(),::toupper);
   }

   cout<< str;

}