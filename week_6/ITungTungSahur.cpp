#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t--)
    {
        string s,s2;
        cin>>s;
        cin>>s2;
        int i=0,j=0,n=s.size(),m=s2.size(),f=1;
        while (i<n && j<m)
        {
            if(s[i]!=s2[j]) {f=0;break;}
            char c=s[i];
            int a=0;
            while (i<n && s[i]==c) { a++; i++;}
            int b=0;
            while (j<m && s2[j]==c) { b++; j++;}
            if (a>b || a*2<b){f=0;break;}
            
        }
        if(i==n && j==m && f==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        
    }
    

    return 0;
}