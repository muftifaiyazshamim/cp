#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t--)
    {
        int a,b,f=0;cin>>a>>b;
        string s;cin>>s;
        int su=0;
            /* code */
        for (int i = 0; i < s.size()-1; i++)
        {
            if(s[i]=='0'){
                for (int j = i+1; j < s.size(); j++)
                {
                    if(s[j]=='1') {su=su+j;i=j-1;break;}

                }
            }
            
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