#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;cin>>s;
    int z=0,o=0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='1') o++;
        else if(s[i]=='0') continue;
        else break;
    }
     for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='0') z++;
        else if(s[i]=='1') continue;
        else break;
        
    }
    if(o>=7 || z>=7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}