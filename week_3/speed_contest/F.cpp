#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t>0)
    {
        int a;cin>>a;
        vector<int>v,v2;
        for (int i = 0; i < a; i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        v2=v;
        sort(v2.begin(),v2.end());
        int foyla=find(v.begin(),v.end(),v2[v2.size()/2])-v.begin();
        int bade=find(v2.begin(),v2.end(),v[v.size()/2])-v2.begin();
        
        if(v[foyla]==v2[bade]) cout<<-1<<endl;
        else cout<<foyla+1<<" "<<bade+1<<endl;
        
    t--;}
    

    return 0;
}