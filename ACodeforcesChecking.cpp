#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    string s="codeforces";
    for (int i = 0; i <t; i++)
    {
        char c;cin>>c;
        int f=0;
        for (int j = 0; j < s.size(); j++)
        {
            if(s[i]==c) {
                cout<<"YES"<<endl;
            }
        }
        cout<<"NO"<<endl;
    }
    

    return 0;
}