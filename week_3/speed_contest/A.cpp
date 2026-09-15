#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a,b;cin>>a>>b;
    int mn=min(a,b);
    cout<<mn*5+(a+b-mn-mn)*2;
    
    

    return 0;
}