#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t>0)
    {int a;cin>>a;
     string s,s2;cin>>s;
        int fp=0,lp=0;
        fp=s.find('B');
        lp=s.rfind('B');

        cout<<-fp+lp+1<<endl;   
    t--;}
    
    
    return 0;
}