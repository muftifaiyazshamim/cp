#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;while (t>0)
    {
        int al;cin>>al;string s;cin>>s;
        set<char>ju;
        for (int i = 0; i < s.size(); i++)
        {
            ju.insert(s[i]);
        }
        vector<char>su;
        for (auto x:ju)
        {
            su.push_back(x);
        }
        
        map<char,char>bu;
        for (int i = 0,j=su.size()-1; i < su.size();j--, i++)
        {
            bu[su[i]]=su[j];
        }
        for (int i = 0; i < s.size(); i++)
        {
            cout<<bu[s[i]];
        }
        cout<<endl;
        
        

    t--;}
    

    return 0;
}