#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;while (t>0)
    {int a;cin>>a;
    string s;cin>>s;
    for (int i = 0,j=a-1; i < j;j--, i++)
    {
        if((s[i]=='0' && s[j]=='1')||(s[i]=='1' && s[j]=='0')) a=a-2;
        if(a==0) break;
    }
    
        
    t--;}
    

    return 0;
}