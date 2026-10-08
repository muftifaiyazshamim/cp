#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    vector<int>v;
    for (int i = 0; i < t; i++)
    {
        int x;cin>>x;v.push_back(x);
    }
    sort(v.begin(),v.begin());
    for (auto  x:v)
    {
        cout<<x<<" ";
    }
    
    

    return 0;
}