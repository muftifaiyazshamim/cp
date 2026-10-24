#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    map<string,int>mp;
    for (int i = 1; i <= t; i++)
    {
        string s;cin>>s;
        if(mp[s]==0) mp[s]=i;
        cout<<mp[s]<<endl;
        
    }
    

    return 0;
}