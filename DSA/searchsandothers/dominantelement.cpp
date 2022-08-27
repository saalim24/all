#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void dom(int arr[],int n)
{
    
    int large{0};

    for (int i=0;i<n;i++)
    {
        large = max(large,(arr[i]));

    }
    int hash[large+1]{0}; 

    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }

    vector <int> vec;
    

    for (int i= 0; i<large+1; i++)
    {
        int push;
        push = hash[i];
        vec.push_back(push);   
    }

    sort(vec.rbegin(),vec.rend());
    
    if (vec.at(1)==vec.at(0))
        cout<< "NO"<<endl;
        else cout<< "YES"<<endl;
   
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
    int n;
    cin>>n;
    int arr[n]{};
    for(int i=0;i<n;i++)    
    {
        int te;
        cin>> te;
        arr[i]= te;
    }
    
    
    cout<< boolalpha;
    dom(arr,n);
    }


}