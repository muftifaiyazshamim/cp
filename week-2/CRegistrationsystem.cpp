#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    map<string,int>v;
    while (t>0)
    
    {string s;cin>>s;
    if(v[s]==0) {v[s]++;cout<<"OK"<<endl;}
    else cout<<s<<v[s]<<endl;
        
    t--;}
    

    

    return 0;
}