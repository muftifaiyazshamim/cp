#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int n,n2;
    cin >> n>>n2;
    vector<long long int> v,v2,au;
    for (long long int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        v.push_back(x);
    }
     for (long long int i = 0; i < n2; i++)
    {
        long long int x;
        cin >> x;
        v2.push_back(x);
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n2; i++)
    {
        int x=upper_bound(v.begin(),v.end(),v2[i])-v.begin();
        au.push_back(x);
    }
    for(auto x:au) cout<<x<<" ";
    cout<<endl;
    

    return 0;
}