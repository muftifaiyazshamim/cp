#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    vector<string>ans;
    while (t>0)
    {
        int a,b;cin>>a;
        vector<int>v1;
        for (int i = 0; i < a; i++)
        {
            int al;cin>>al;v1.push_back(al);
        }
        vector<string>v2;
        cin>>b;
        for (int i = 0; i < b; i++)
        {
            string al;cin>>al;v2.push_back(al);
              
        }
        map<char,int>mp;
        for (int i = 0; i < v2.size(); i++)
        {
            string s=v2[i];int cu;
            if(s.size()==v1.size())
            {   
                for (int j = 0; j < s.size(); j++)
                {
                    if(mp[s[j]]==0) mp[s[j]]=v1[j];
                }
                for (int j = 0; j < s.size(); j++)
                {
                    if(mp[s[j]]==v1[j]) cu++;
                }
                if(cu==s.size()) ans.push_back("YES");
                else ans.push_back("NO");
            }

        }
        for(auto x:ans){
            cout<<x<<endl;
        }
        
        



    t--;}
    
    

    return 0;
}