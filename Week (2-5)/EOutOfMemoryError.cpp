#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t--)
    {
        long long int n,m,h;cin>>n>>m>>h;
        vector<pair<long long int,long long int>>vp;
        vector<long long int>v;
        for (long long int i = 0; i < n; i++)
        {
            long long int x;cin>>x;v.push_back(x);
        }
        
        for (long long int i = 0; i < m; i++)
        {
            long long int x,y;cin>>x>>y;vp.push_back({x,y});
        }
        vector<long long int>org=v,chn;
        for (long long int i = 0; i < m; i++)
        {
            long long int idx=vp[i].first-1,toadd=vp[i].second;
            v[idx]=v[idx]+toadd;
            chn.push_back(idx);
            if(v[idx]>h){
                for (int j = 0; j < chn.size(); j++)
                {
                    v[chn[j]]=org[chn[j]];
                }
                chn.clear();
            }
        }
        for (long long int i = 0; i < n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
        
        
    }
    

    return 0;
}