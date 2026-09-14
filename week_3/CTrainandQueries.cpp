#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    vector<int>ans;
    while (t>0)
    
    {
        cout<<endl;
        int a,b;cin>>a>>b;
        vector<int>v1;
        vector<pair<int,int>>v2;
        map<int,int>f,l;
        for (int i = 0; i < a; i++)
        {
            int x;cin>>x;v1.push_back(x);
            if(f.find(x)==f.end()) f[x]=i;
            l[x]=i;
        }
        for (int i = 0; i < b; i++)
        {
            int x,y;cin>>x>>y;
            
            if(f.find(x)!=f.end() && l.find(y)!=f.end() && f[x]<l[y])
            {
                ans.push_back(1);
                
            }
            else ans.push_back(0);
            
        }

        
    t--;}
    for (auto x:ans)
    {
        if(x==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    

    return 0;
}