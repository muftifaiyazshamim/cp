#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    vector<pair<int,int>>v;
    while (t--)
    {
        int a,b;cin>>a>>b;
        v.push_back({a,b});        
    }
    sort(v.begin(),v.end());
    int t1=-1,t2=-1;
    for (auto [l,r]:v)
    {
        if(t1<l) t1=r;
        else if(t2<l) t2=r;
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}