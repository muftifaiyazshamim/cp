#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int a,b,c,d;cin>>a>>b>>c>>d;
    set<long long int >s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
    cout<<4-s.size();

    return 0;
}