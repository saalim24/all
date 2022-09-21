#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vector<int> v;
    int a=2;
    while(a--){
    for (int i=0;i<vec.size();i++)
    {
        v.push_back(vec[i]);
    }}
    for (int i:v)
    cout<< i;
}