#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    
    int t;cin>>t;
    while (t--)
    {
        int a,su=0;cin>>a;
        vector<int>v;
        for (int i = 0; i < a; i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        for (int i = 0; i < a; i++)
        {
            for (int j = i+1; j < a; j++) if(v[i]>=v[j]) su++;
        }
        cout<<su<<endl;
        
    }
    

    return 0;
}