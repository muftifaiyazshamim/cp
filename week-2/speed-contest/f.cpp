#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;while (t>0)
    {int a;cin>>a;vector<int> v,vl;
        for (int i = 0; i < a; i++)
        {
            int x;cin>>x;v.push_back(x);
        }int m;
        if(a==3) m=min(v[0]+v[1],v[1]+v[2]);
        else if(a==2) m=v[0]+v[1];
        else {
        for (int i = 0; i < a-3; i++)
            {
        
            m=min(v[i]+v[i+1],v[i+1]+v[i+2]);
            vl.push_back(m);
            
            }
            sort(vl.begin(),vl.end());
            m=vl[0];
        }
        
        
        cout<<m<<endl;
    t--;}
    

    return 0;
}