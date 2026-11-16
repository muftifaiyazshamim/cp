
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
 int t;cin>>t;
 while (t--)
 {
    int a,su=1,o=0,z=0;cin>>a;
    vector<int>v;
    for (int i = 0; i < a; i++)
    {
        int x;cin>>x;v.push_back(x);
        if (x==0) z++;
        else if(x==1) o++;
    }
    su=pow(2,z);
    cout<<su*o<<endl;
    

    
 }
    
    

    return 0;
}