#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t--)
    {
        int su;cin>>su;
        int a,b,c,d;cin>>a>>b>>c>>d;
        int mx=max(a,(max(b,max(c,d))));
        cout<<mx<<endl;
    }
    

    return 0;
}