#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t>0)
    {
    int a,b,c=0,o=0;cin>>a>>b;
    string s;cin>>s;
    for (int i = 0; i <=a-b; i=i+b)
    {
        string s2=s.substr(i,b);
        string s3(b,'1');
         if(s2==s3) c++;
        
    }
    cout<<c<<endl;
        t--;}
    

    return 0;
}