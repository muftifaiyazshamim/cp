#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t,su=0;cin>>t;
    while(t--){
        int p,q; cin>>p>>q;
        if(q-p>=2) su++;
    }
    cout<<su;
    return 0;
}