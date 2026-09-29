#include <bits/stdc++.h>
using namespace std;
int main() {

    string s;cin>>s;
    if(s[0]==s[1]||s[0]==s[2]||s[0]==s[3]) s[0]=s[0]+'0';
    if(s[1]==s[0]||s[1]==s[2]||s[1]==s[3]) s[1]=s[1]+'0';
    if(s[2]==s[0]||s[2]==s[1]||s[2]==s[3]) s[2]=s[2]+'0';
    if(s[3]==s[0]||s[3]==s[1]||s[3]==s[2]) s[3]=s[3]+'0';
    cout<<s;

    
  
    

    return 0;
}