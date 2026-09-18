#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t>0)
    {int x,y;cin>>x>>y;
        string a;cin>>a;int c=0;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i]!=a[i+y])
            {
                c++;
            }
            
        }
        if(c==x-1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        
    t--;}
    

    return 0;
}