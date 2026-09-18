#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a,b;cin>>a>>b;
    if(b>=a*2) cout<<a;
    else cout<<abs(b-(a));

    return 0;
}