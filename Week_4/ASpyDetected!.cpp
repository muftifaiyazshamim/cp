#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;cin>>t;while (t>0)
    {long long int a;cin>>a;
        vector<long long int>v;
        map<long long int, vector<long long int>> mp;
        for(long long int i = 0; i < a; i++){
            long long int x;cin>>x;v.push_back(x);
        }
        for (long long int i = 0; i < a; i++)
        {
            mp[v[i]].push_back(i);
        }
        for(auto x:mp)
        {
             if(x.second.size()==1) {cout<<x.second[0]+1<<endl;break;} 
        }
        
    t--;}
    

    return 0;
}