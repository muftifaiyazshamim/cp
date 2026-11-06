#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t--)
    {
        long long int n,k,z;
        cin >> n>>k;
        map<int,int> mp;
        for (long long int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            mp[x]++;

        }

        if (mp[k]>0)
        {
           cout<<"YES\n";
        }
        else cout<<"NO\n";
        

        
    }
    

    return 0;
}