#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t--)
    {
        int a,b,c;cin>>a>>b>>c;
        string s;
        int mx=max(a,max(b,c));
        
        if (mx==a)
        {
        for (int i = 0; i < a+b+c; i++)
        {
            s.push_back('P');
        }
        }
        else if(mx==b){
        for (int i = 0; i < a+b+c; i++)
        {
            s.push_back('R');
            
        }
        }
        else{
        for (int i = 0; i < a+b+c; i++)
        {
            
            s.push_back('S');

        }
        }
        cout<<s<<endl;
        
        
    }
    

    return 0;
}