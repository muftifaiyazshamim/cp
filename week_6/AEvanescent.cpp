#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t--)
    {
        int a,bu=1,su=0;cin>>a;
        string s;cin>>s;
        for (int i = 0; i < a-1; i++)
        {
            if(s[i]!=s[i+1]) bu++;
        }
        for (int i = 1; i < a-1; i++)
        {
            if (s[i-1]==s[i+1] && s[i]!=s[i-1]) su=2;
            else if(s[i]!=s[i-1] && s[i]!=s[i+1] && su==0) su=1;
        }
        cout<<bu-su<<endl;    

    }
    

    return 0;
}