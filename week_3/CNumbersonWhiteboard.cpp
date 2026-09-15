#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;while (t>0)
    {int a;cin>>a;
    set<int>d;
    for (int i = 1; i <= a; i++)
    {
      d.insert(i);  
    }
    vector<pair<int,int>>v;

    while (d.size()>1)
    {
        d.erase(a);
        d.erase(ceil(a/2));
        v.push_back({ceil(a/2),a});
    }
    for(auto x:d){
        cout<<x<<" ";
    }
    cout<<"endl";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
        
        
    t--;}
    

    return 0;
}