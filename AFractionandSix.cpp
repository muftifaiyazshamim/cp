#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while (t--)
    {
        int a,b;cin>>a>>b;
        multiset<char>st1,st2;
        string s,s2,ans;cin>>s;
        cin>>s2;
        for (int i = 0; i < a; i++)
        {
            st1.insert(s[i]);
        }
         for (int i = 0; i < b; i++)
        {
            st2.insert(s2[i]);
        }
        for (int i = 0; i < b; i++)
        {
            if (st1.find(s2[i])!=st1.end())
            {
                st1.erase(st1.find(s2[i]));
                st2.erase(st2.find(s2[i]));
            }
            
        }
        for (auto x:st1)
        {
            ans.push_back(x);
        }
        if(st2.empty() && ans=="isx") cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
    
    

    return 0;
}