#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;cin>>t;
    while(t--){
    long long int a,au=-1;cin>>a;
    map<long long int,long long int>mp;
    for (int i = 0; i < a; i++)
    {
        long long int x;cin>>x;
        mp[x]=i+1;
        
    }
    for (auto x:mp)
    {
        for (auto y:mp){
            if (gcd(x.first,y.first)==1) au=max(au,x.second+y.second);
        }
    }
    cout<<au<<"\n";
    
}
    return 0;
}