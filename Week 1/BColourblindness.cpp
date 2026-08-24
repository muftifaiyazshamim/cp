#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    vector<string> sv;
    while (t>0)
    {int a;cin>>a;
    string s,s2; cin>>s;
    cin>>s2; 
     for (int i = 0; i < s.size(); i++)
     {
        if(s[i]=='G'||s[i]=='B') s[i]='B';
        if(s2[i]=='G'||s2[i]=='B') s2[i]='B';
     }
    if(s==s2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    t--;}

    


    

    return 0;
}