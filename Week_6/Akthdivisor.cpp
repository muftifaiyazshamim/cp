#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int a,b;cin>>a>>b;
    set<long long int>s;
    vector<long long int>v;

    for (long long int i = 1; i*i <= a; i++)
    {
        if(a%i==0) {s.insert(i); s.insert(a/i);}
    }
    for (auto x:s)
    {
        v.push_back(x);
    }
    if (s.size()>=b) cout<<v[b-1]<<endl;
    else cout<<-1<<endl;
    

    return 0;
}