#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;cin>>t;
    for (int i = 0; i < t; i++)
    {
        long long int a,b;
        cin>>a>>b;
        if(a<b) cout<<0<<endl;
        else cout<<a/b<<endl;
    }
    

    return 0;
}