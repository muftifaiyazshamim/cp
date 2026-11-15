#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n,k,q;cin>>n>>k>>q;
    vector<int>d(200000+2),p(200000+2),v(200000+2);
    while (n--)
    {
        int a,b;cin>>a>>b;
        d[a]++;
        d[b+1]--;
    }
    for (int i = k; i <=(200000+2); i++)
    {
        v[i]=v[i-1]+d[i];
        if (v[i]>=k) p[i]=p[i-1]+1;
        else p[i]=p[i-1];
    }
    while (q--)
    {
        int a,b;cin>>a>>b;
        cout<<p[b]-p[a-1]<<endl;
    }
    return 0;
}