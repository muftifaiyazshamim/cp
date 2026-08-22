#include <bits/stdc++.h>
using namespace std;

int main() {
    int c=0;
    string s,s2;
    cin>>s;
    cin>>s2;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]!=s2[i]) c++;
    }
    cout<<c;

    return 0;
}