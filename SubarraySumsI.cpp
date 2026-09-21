#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int a,b,c=0;cin>>a>>b;
    vector<long long int>v,v2(a);
    for (long long int i = 0; i < a; i++)
    {
        long long int x;cin>>x;v.push_back(x);
    }
    v2[0]=v[0];
    for (long long int i = 1; i < a; i++)
    {
        v2[i]=v[i]+v2[i-1];
    }
    for (long long int i = 0; i < a; i++)
    {
        if(v2[i]>=b) c++;
    }
    cout<<c;
    

    return 0;
}