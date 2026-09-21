#include <bits/stdc++.h>
using namespace std;
//bal oisena 
string palu(string s){
    string temp=s;
    for (int i = 0,j=s.size()-1; i < s.size();j--, i++)
    {
        temp[i]=s[j];
    }
    return temp;
    
}
int main() {
    int t;cin>>t;
    while (t>0)
    {int a,b;cin>>a>>b;
     int pal=0;   
     string s,su;cin>>s;
     su=palu(s);
     
     if (s==su && b==0) pal=1;
    else {
        for (int i = 0; i < s.size()-b; i++)
        {
            string pu=s.substr(i,s.size()-b);
            string pus=palu(pu);
            if(pu==pus) {pal=1;break;}
        }
        continue;
    }
     
     if(pal==1) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;

        
    t--;}
    
    
    

    return 0;
}