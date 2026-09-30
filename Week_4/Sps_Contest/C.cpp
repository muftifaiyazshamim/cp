#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t--)
    {
        int a,b,f=0;cin>>a>>b;
        string s;cin>>s;
    while (true)
    {
           
        for (int i = 0; i < s.size(); i++)
        {
            if(f==b) break;
            if(s[i]=='0' &&  s[i+1]=='1') {s[i]='1';f++;}
            
        }
        if(f==b) break;
        
    }
        int pu=0;
        for (int i = 0; i < s.size(); i++)
        {
        if(s[i]=='1')pu++;
        }
        cout<<pu<<endl;
        
        
    }
    

    return 0;
}