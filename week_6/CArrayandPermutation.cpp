#include <bits/stdc++.h>
using namespace std;

int main() {   
    int t;cin>>t;;
    while (t--)
    {
        int a;cin>>a;
        vector<int>v,v2;
        vector<int>f;
        vector<int>pos(a+1);

        for (int i = 0; i < a; i++)
        {
            int x;cin>>x;v.push_back(x);
            pos[x]=i;
        }
        for (int i = 0; i < a; i++)
        {
            int x;cin>>x;v2.push_back(x);
        }
        int l=INT_MIN;
        for (int i = 0; i < a; i++)
        {
            if(i!=0 && v2[i]==v2[i-1]) f.push_back(1);
            else if(pos[v2[i]]>l){f.push_back(1); l=pos[v2[i]];}
            else f.push_back(0);
        }
        int fu=0;
        for (auto sL:f)
        {
            if(sL==0) {fu=1;break;}
        }
        if(fu==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;     
    
    }
    

    return 0;
}