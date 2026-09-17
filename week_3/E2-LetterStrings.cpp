#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;cin>>t;while (t>0)
    {
        long long int a;cin>>a;
        vector<string>v;
        for (long long int i = 0; i < a; i++)
        {
        string s;cin>>s;
        v.push_back(s);                
        }
        long long int c=0;
        for (long long int i = 0; i < a-1; i++)
        {
            for (long long int j = i+1; j < a; j++){
            string s1=v[i],s2=v[j];
            if(((s1[0]!=s2[0])&&(s1[1]==s2[1]))||((s1[1]!=s2[1])&&(s1[0]==s2[0]))) c++;
            }
        } 
        cout<<c<<endl;   
        
    t--;}
    

    return 0;
}