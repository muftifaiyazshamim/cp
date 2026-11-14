#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s,au;cin>>s;

    for (int i = 0; i < s.size(); )
    {
        if (s[i]=='.')
        {
            au.push_back('0');
            i++;
        }
        else if(s[i]=='-'){
            if (s[i+1]=='.') au.push_back('1');
            else au.push_back('2');
            i++;i++;
        }
    }
    cout<<au;
    

    return 0;
}