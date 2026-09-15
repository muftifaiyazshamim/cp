#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t,cust=1;cin>>t;
    set<pair<int,int>>su;
    multiset<pair<int,int>>mu;
    vector<int>as;
    for (int i = 1; i <= t; i++)
    {
        int a,b;cin>>a;
        if(a==1){
            cin>>b;
            su.insert({cust,b});
            mu.insert({b,-cust});
            cust++;
        }
        else if(a==2){
            int x=su.begin()->first,y=su.begin()->second;
            as.push_back(x);
            su.erase(su.begin());
            mu.erase({y,-x});

        }
        else{
            int x=-mu.rbegin()->second,y=mu.rbegin()->first;
            as.push_back(x);
            mu.erase(--mu.end());
            su.erase({x,y});
        }
    }
    for (auto x:as)
    {
        cout<<x<<" ";
    }
    
    
    
    
    
    // if(a==2) 
    




    return 0;
}