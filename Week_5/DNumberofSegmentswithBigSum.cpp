#include <bits/stdc++.h>
using namespace std;

int main() {

    long long int a,x,su=0,pu=0;cin>>a>>x;
    vector<long long int>v;
    for (long long int i = 0; i < a; i++)
    {
        long long int x;cin>>x;v.push_back(x);
    }
    long long int l=0,r=0;
    while(r<a){
        su=su+v[r];
        while(su>=x){pu=pu+a-r; su=su-v[l]; l++;}
        r++;
    }
    cout<<pu;
    
    

    return 0;
}