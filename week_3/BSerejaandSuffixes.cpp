#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a,b;cin>>a>>b;
    vector<int>v1,v2;
    map<int,int>mp;
    for (int i = 0; i < a; i++)
    {
        int c;cin>>c;v1.push_back(c);
       
    }
    for (int i = 0; i < b; i++)
    {
        int c;cin>>c;v2.push_back(c);
    }
    vector<int>v3(a);
    set<int>su;
       for (int i = a-1;i>=0 ;i-- )
       {
        su.insert(v1[i]);
        v3[i]=su.size();
       }
    
    for (int i = 0; i < b; i++)
    {
        
     cout<<v3[v2[i]-1]<<endl;  
        
    }
    
    return 0;
}