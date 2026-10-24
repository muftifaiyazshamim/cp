#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int a,mn,mx,c=0;cin>>a;
    vector<long long int>v;
    for (long long int i = 0; i < a; i++)
    {
        long long int x;cin>>x;v.push_back(x);
        if(i==0) mn=mx=x;
        if(i!=0 && (x>mx || x<mn)) c++;
        mx=max(x,mx);
        mn=min(x,mn);
    }
    cout<<c;

    return 0;
}