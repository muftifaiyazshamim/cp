#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t>0)
    {int a,ei=-1,eim=-1,ejm=-1,ej=-1;cin>>a;
        std::vector<int> s(a);
        for(int i = 0; i < a; i++){
            cin>>s[i];
        }
        for (int i = 0; i < a; i++)
        {
            if (s[i]==1)
            {
                ei=i;break;
            }
            
            
        }
        for (int i = 0; i < a; i++){
            if (s[i]==-1) {eim=i;break;}
        }
        for (int i =a-1; i >= 0; i--)
        {
            if (s[i]==1)
            {
                ej=i;break;
            }
        }
        for (int i =a-1; i >= 0; i--)
        {
            if (s[i]==-1)
            {
                ejm=i;break;
            }
        }
        int l = max(ei, eim),r = max(ej, ejm);
        
        
        for (int i = 0; i < a; i++)
            {
        
            if(i==l ||i==r) {cout<<1<<" ";}
            else cout<<0<<" ";
            
            
            }
       
        cout<<endl;
        
        
    t--;}
    

    return 0;
}