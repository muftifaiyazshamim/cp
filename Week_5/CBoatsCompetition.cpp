#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;cin>>t;
    while (t--)
    {
        long long int a;cin>>a;
        map<long long int,long long int>mp;
        vector<long long int>v;
        for (int i = 0; i < a; i++)
        {
            long long int x;cin>>x;v.push_back(x);
            mp[x]++;
        }
        long long int mc=0;
        for (int i = 2; i <= a*2; i++)
        {
            long long int tot=0;
            for (auto cu:mp)
            {
                long long int rst=i-cu.first;
                if(rst>=1 && mp.count(rst)) tot=tot+min(cu.second,mp[rst]);
            }
            tot=tot/2;
            mc=max(mc,tot);         
        }
        cout<<mc<<endl;
        
        
    }
    

    return 0;
}