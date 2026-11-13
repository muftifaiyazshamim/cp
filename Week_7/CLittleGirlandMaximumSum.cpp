#include <bits/stdc++.h>
using namespace std;
#define int long long 
signed main() {
    
    int n,q,su=0,pu=0;cin>>n>>q;
    vector<int>v,v2;
    map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;v.push_back(x);
    }
    std::sort(v.begin(), v.end());
    for (int i = 0; i < q; i++)
    {
        int x,y;cin>>x>>y;
        mp[x]++;
        mp[y+1]--;        
        
    }
    for (int i = 1; i <= n; i++){
        pu=pu+mp[i];
        v2.push_back(pu);
    } 
    std::sort(v2.begin(), v2.end());
    for (int i = 0; i < n; i++)
    {
        su=su+(v[i]*v2[i]);
    }
    
    cout<<su;

    return 0;
}