#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<string>
#define FAST ios::sync_with_stdio(false); cin.tie(0)
#define line "\n"
using namespace std;
int main()
{
   FAST;
   string str;
   cin>> str;
   int len = str.length();
   transform(str.begin(),str.end(),str.begin(),::tolower);
   
   for (int i =0;i<len;i++)
   {
      if (str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='i'||str[i]=='u'||str[i]=='y')
      continue;
      else
      {
         cout<< '.' << str[i];
      }
  
      
   }

}