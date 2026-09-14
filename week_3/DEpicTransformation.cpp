#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;while (t>0)
    {int a,c=0;cin>>a;vector<int>v;map<int,int>mp;
        vector<pair<int,int>>v2;
    for (int i = 0; i < a; i++)
    {
        int x;cin>>x;v.push_back(x);
        mp[x]++;      
    }
    for (auto [x,y]:mp )
    {
        cout<<y<<"<-"<<x<<endl;
    }
    
     
   t--;}
    
    

    return 0;
}