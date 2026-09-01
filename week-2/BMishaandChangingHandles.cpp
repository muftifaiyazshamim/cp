#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a;cin>>a;
    vector<pair<string,string>>s(a);
    set<pair<string,string>>su;
    for (int i = 0; i <a; i++)
    {
        string s1,s2;cin>>s1>>s2;
        s[i].first=s1;
        s[i].second=s2;
    }
    for (int i = 0; i < a-1; i++)
    {
        for (int j = 1; j < a; j++)
        {
            if (s[i].second==s[j].first)
            {
                s[i].second=s[j].second;

            }
            
        }
        su.insert(s[i].first,s[i].second);
        
    }
    for (auto x:su)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    
    
    
    

    return 0;
}