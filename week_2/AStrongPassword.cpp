#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a;cin>>a;
    while (a>0)
    {string s;cin>>s;
     for (int i = 0; i < s.size()-1; i++)
     {
        if(s[i]==s[i+1]){
            if(s[i]!='a') s.insert(i+1,1,'a');
            else s.insert(i+1,1,'b');  
      i++;
        }
     }
       cout<<s<<endl;
     
    a--;}
    

    return 0;
}