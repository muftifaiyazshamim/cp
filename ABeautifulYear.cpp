#include <bits/stdc++.h>
using namespace std;
//val ouisena
int main() {
    
    int su,f=1;;
    string s;cin>>s;
    su=stoi(s);
    su++;
    s=to_string(su);
    for (int i = 0; i < s.size()-1; i++)
    {
        for (int j = i+j; j < s.size(); j++)
        {
            if (s[i]==s[j]) {
                su++;
                s=to_string(su);
                i=0;

            }
            
        }
        
    }


   
   

    cout<<s;


    return 0;
}