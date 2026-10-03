#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    int v1[t+1],v2[t+1];
    for (int i = 1; i <= t; i++)
    {
        int x;cin>>x;
        v1[i]=x;
        v2[x]=i;

    }
    for (int i = 1; i <= t; i++)
    {
        cout<<v2[i]<<" ";
    }
    

    return 0;
}