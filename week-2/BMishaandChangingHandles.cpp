#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a,f=0;cin>>a;
    vector<pair<string,string>>s(a);
    set<pair<string,string>>su;
    for (int i = 0; i <a; i++)
    {
        string s1,s2;cin>>s1>>s2;
        s[i].first=s1;
        s[i].second=s2;
    }
    for (int i = 0; i < a; i++)
    {
        
        for (int j = i+1; j < a; j++)
        {
            if (s[j].first!="" && s[i].second==s[j].first)
            {
                s[i].second=s[j].second;
                s[j].first="";
                
            }
            
        }
        if(s[i].first!="") su.insert({s[i].first,s[i].second});
        
    }
    cout<<su.size()<<endl;
    for (auto x:su)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    
    
    
    

    return 0;
}