#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n,q;cin>>n>>q;
    vector<int>v;
    vector<pair<int,int>>v2;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;v.push_back(x);
    }
    for (int i = 0; i < q; i++)
    {
        int x,y;cin>>x>>y;v2.push_back({x,y});
    }

    return 0;
}