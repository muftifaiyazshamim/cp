#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    for (int i = 0; i < t; i++)
    {
        string s,s2,ass;
        cin>>s;
        cin>>s2;
        for (int i = 0; i < 5; i++)
        {
            if(s[i]!=s2[i]) ass.push_back('B');
            else ass.push_back('G');
        }
        cout<<ass<<endl;
        
    }
    

    return 0;
}