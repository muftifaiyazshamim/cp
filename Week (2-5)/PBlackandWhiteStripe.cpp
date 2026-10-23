#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t--)
    {
        int a,b,c=0;cin>>a>>b;
        string s;cin>>s;
        
        for (int i = 0; i <b ; i++)
        {
            if(s[i]!='B') c++;
            
        }
        int j=c;
        for (int i = b; i < a; i++)
        {
            if (s[i]!='B') c++;
            if (s[i-b]!='B') c--;
            j=min(c,j);     
        }
        cout<<j<<endl;
        


    }
    

    return 0;
}