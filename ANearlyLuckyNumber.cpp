#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int se=0,fo=0;
    string s;cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='7') se++;
        else if(s[i]=='4') fo++;
    }
    if (se+fo==7||se+fo==4) cout<<"YES";
    else cout<<"NO";

    return 0;
}