#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    map<string,int>mp;
    for (int i = 0; i < t; i++)
    {
        string s;cin>>s;
        if(mp[s]==0) {cout<<"NO"<<endl; mp[s]++;}
        else cout<<"YES"<<endl;
    }
    

    return 0;
}