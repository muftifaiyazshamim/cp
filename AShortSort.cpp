#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t--)
    {
        string s;cin>>s;
        if(s=="abc") cout<<"YES"<<endl;
        else if(s=="acb") cout<<"YES"<<endl;
        else if(s=="bac") cout<<"YES"<<endl;
        else if(s=="bca") cout<<"NO"<<endl; 
        else if(s=="cab") cout<<"NO"<<endl;
        else if(s=="cba") cout<<"YES"<<endl;
    }
    

    return 0;
}