#include <bits/stdc++.h>
using namespace std;

int main(){
long long int t;cin>>t;
 while (t--)
 {
    long long int a,b;cin>>a>>b;
    string s;cin>>s;
    long long int w=0;
    vector<long long int>v;
for (long long int i = 0,j=b-1; i < a; i++)
{
    if(s[i]=='W') w++;
    if(i==j){ v.push_back(w);j=j+b;w=0;}
}
sort(v.begin(),v.end());
cout<<v[0]<<endl;

 }
    
    return 0;
}