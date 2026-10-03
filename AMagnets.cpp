#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    vector<string>v;
    while (t--)
    {
    string s;cin>>s;
    v.push_back(s);
    }
    int p=0,m=0;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]=="10") p++;
        else m++;
    }
    cout<<min(p,m);

    return 0;
}