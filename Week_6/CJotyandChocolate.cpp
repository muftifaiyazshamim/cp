#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int n, a, b, p,q;cin>>n>>a>>b>>p>>q;
    long long int su=0;
    for (long long int i = 1; i <= n; i++)
    {
        if(i%a==0 && i%b==0) su=su+max(p, q);
        else if(i%a==0) su=su+p;
        else if (i%b==0) su=su+q;
    }
    cout<<su;

    return 0;
}