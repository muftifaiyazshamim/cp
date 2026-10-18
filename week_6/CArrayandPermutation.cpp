#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;;
    while (t--)
    {
        int a;cin>>a;
        vector<int>v,v2;
        vector<int>f;

        for (int i = 0; i < a; i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        for (int i = 0; i < a; i++)
        {
            int x;cin>>x;v2.push_back(x);
        }
        for (int i = 0; i < a; i++)
        {
            if(v[i]==v2[i]) f.push_back(1);
            else{
                if(find(v.begin(),v.end(),v2[i])!=v.end()) f.push_back(1);
                else f.push_back(0);  
            }
        }
        int fu=0;
        for (auto sL:f)
        {
            if(sL==0) {cout<<"NO"<<endl;fu=1;break;}
        }
        if(fu==0) cout<<"YES"<<endl;
        
        
    
    }
    

    return 0;
}