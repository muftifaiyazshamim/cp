#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int n, a, b, p,q;cin>>n>>a>>b>>p>>q;
    long long int cu1=p*(n/a),cu2=q*(n/b),ob=n/lcm(a,b);

    cout<<cu1+cu2-ob*(p+q)+ob*max(p,q);
    return 0;
}