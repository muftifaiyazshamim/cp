#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;cin>>t;
    while (t>0)
    {
        long long int a;cin>>a;
        map<string,long long int>mp; 
        for (long long int i = 0; i < a; i++)
        {
        string s;cin>>s;
        mp[s]++;        
        }
        vector<pair<string,long long int>>v(mp.begin(),mp.end());
        long long int cu=v.size();
        long long int c=0;
        for (long long int i = 0; i < cu-1; i++)
        {
            for (long long int j = i+1; j < cu; j++){
            string s1=v[i].first,s2=v[j].first;
            if(((s1[0]!=s2[0])&&(s1[1]==s2[1]))||((s1[1]!=s2[1])&&(s1[0]==s2[0]))) c=c+v[i].second*v[j].second;
            }
        } 
        cout<<c<<endl;   
        
    t--;}
    

    return 0;
}