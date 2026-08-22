#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    sort(s.begin(),s.end());
  
    int a=97;

    for(int i=0;i<s.size();i++){
    if((int)s[i]==a) a++; 
    else if(i==s.size()-1 && a>122) {cout<<"None";return 0;}
    }
    cout<<(char) a;
    return 0;
}