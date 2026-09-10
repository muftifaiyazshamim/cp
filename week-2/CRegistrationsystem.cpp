#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int a;
    cin>>a;
    map<string,int>mp;
    for (int i = 0; i < a; i++)
    {
        string s;
        cin>>s;
        if (mp[s]==0)
        {
            cout<<"OK"<<endl;
            mp[s]=1;
        }
        else{
            cout<<s<<mp[s]<<endl;
            mp[s]=mp[s]+1;
 
        }
        
    }
    
    
        
 
         
    
 
    return 0;
}