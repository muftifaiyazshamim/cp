#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s,p=s;
    string s2,p2=s2;
    cin>>s;cin>>s2;

    vector<string> vs(1);vs[0]=s;vs[0]=s2;
    sort(vs.begin(),vs.end());
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]>=65 && s[i]<=90) s[i]=s[i]+32;
        if(s2[i]>=65 && s2[i]<=90) s2[i]=s2[i]+32;
    }
    if(s==s2) {cout<<0;return 0;}
    else{
        if(vs[0]==p) cout<<1;
        else cout<<-1;
    }

    return 0;
}