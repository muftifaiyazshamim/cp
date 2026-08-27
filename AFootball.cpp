#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;cin>>s;
    int z=0,o=0;
    
    for (int i = 0; i < s.size(); i++)
    {
        string su=s.substr(i,7);
        if(su=="1111111") o++;
        // else if(s[i]=='0') continue;
        else if(su=="0000000") z++;

    }
     
    if(o>=7 || z>=7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}