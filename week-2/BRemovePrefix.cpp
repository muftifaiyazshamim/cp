#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;while (t>0)
    {map<int,int>mp;
     vector<int>v;   
    int a;cin>>a;
    for (int i = 0; i < a; i++)
    {
        int al;cin>>al;
        mp[al]++; 
        v.push_back(al);   
    }
    int tem=0;
    for (int i = 0; i < a; i++)
    {
        mp[v[i]]--;
        if(mp[v[i]]>0)tem=i+1;
    }
  cout<<tem<<endl;
    
        
        
    t--;}
    

    return 0;
}