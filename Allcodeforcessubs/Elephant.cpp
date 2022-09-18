#include<iostream>
#include<vector>
#include<algorithm>
#define FAST ios::sync_with_stdio(false); cin.tie(0)
#define line "\n"
using namespace std;
int main()
{
   int n,e{},count{}; cin>> n;
   while (e<n)
   {
      e+=5;
      count++;
      
   }      
   cout<< count;
}