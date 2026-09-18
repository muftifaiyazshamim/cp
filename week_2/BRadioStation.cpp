#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int a,b;
    cin>>a>>b;
    map<string,string>main;
     
   for (int i = 0; i < a; i++)
   {
    string s,s2;cin>>s>>s2; main[s2]=s;
   }
    for (int i = 0; i <= b; i++)
   {
    string s,s2,s3;cin>>s>>s2; 
    s3=s2.substr(0,s2.size()-1);
    cout<<s<<" "<<s2<<" "<<"#"<<main[s3]<<endl;

   }
  
     
        
 
         
    
 
    return 0;
}