#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int n,x;
    map<long long int, long long int> mp;
    cin >> n >> x;
    vector<long long int>v;
    for (int i = 0; i < n; i++)
    {
        long long int x;cin>>x;v.push_back(x);
    }
    
    for (int i = 0; i < n; i++)
    {     
        for (int j = i+1; j < n; j++)
        {                
        
        long long int nd = x - v[i]-v[j];
        if(mp.count(nd)){ cout << mp[nd] << " " << i + 1<<" "<<j+1; return 0;}
    
        }
        mp[v[i]] = i + 1;

    }
    cout << "IMPOSSIBLE";

    return 0;
}