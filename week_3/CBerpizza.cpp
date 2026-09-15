#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    set<pair<int,int>>su;
    multiset<pair<int,int>>mu;
    vector<int>as;
    for (int i = 1; i <= t; i++)
    {
        int a,b;cin>>a;
        if(a==1){
            cin>>b;
            su.insert({i,b});
            mu.insert({b,-i});
        }
        else if(a==2){
            int x=-su.begin()->first,y=su.begin()->second;


        }
        else{
            int x=-mu.rbegin()->second,y=mu.rbegin()->first;
            as.push_back(x);
            mu.erase(--mu.end());
            su.erase({x,y});
        }
    }
    
    
    
    
    // if(a==2) 
    




    return 0;
}