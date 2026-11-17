#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int long long
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
signed main() {
    
    int t;cin>>t;
   
    while (t--)
    {
    int a,au=0;cin>>a;
    vector<pair<int,int>>v;
    pbds<int>pb;
    for (int i = 0; i < a; i++)
    {
        int x,y;cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < a; i++)
    {
        au=au+pb.size()-pb.order_of_key(v[i].second);
        pb.insert(v[i].second);
    }
    cout<<au<<endl;
  
    }
    

    return 0;
}