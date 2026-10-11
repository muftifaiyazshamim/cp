#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a,x,su=0;cin>>a>>x;
    vector<long long int>v;
    for (long long int i = 0; i < a; i++)
    {
        long long int x;cin>>x;v.push_back(x);
    }
    long long int l=0,r=0;
    map<long long int,long long int>mp;
    while(r<a){
        mp[v[r]]++;
        while(mp.size()>x){
            mp[v[l]]--;
            if(mp[v[l]]==0) mp.erase(v[l]);
            l++;
        }
        su=su+(r-l+1);
        r++;
    }

    cout<<su<<endl;

    return 0;
}