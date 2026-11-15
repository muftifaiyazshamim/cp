#include <bits/stdc++.h>
using namespace std;
#define int long long 
signed main() {
    
    int n,m,k,su=0;cin>>n>>m>>k;
    vector<int>du(n+2),cu(m+2),v(n+2),l(m+1),r(m+1),d(m+1);
    for (int i = 1; i <= n; i++) 
        cin>>v[i];
    for (int i = 1; i <= m; i++) 
        cin>>l[i]>>r[i]>>d[i];
    for (int i = 0; i < k; i++)
    {
        int x,y;cin>>x>>y;
        cu[x]++;
        cu[y+1]--;
    }
    for (int i = 1; i <= m; i++) {
        cu[i]=cu[i]+cu[i-1];
        int temp=cu[i]*d[i];
        du[l[i]]=du[l[i]]+temp;
        du[r[i]+1]=du[r[i]+1]-temp;
    }
    for (int i = 1; i <=n; i++)
    {
        su=su+du[i];
        cout<<v[i]+su;
        if(i==n) cout<<endl;
        else cout<<" ";
    }
    

    

    

    return 0;
}