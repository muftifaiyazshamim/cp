#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;cin>>t;
    while (t--)
    {
    long long int a;cin>>a;
    vector<long long int>v;
    for (int i = 0; i < a; i++)
    {
        long long int x;cin>>x;v.push_back(x);
    }
    if(a==1) cout<<0<<endl;
    else{
        long long int s1=v[0],s2=v[a-1],c=2,pu=0;
        for (int i = 0,j=a-1; ; )
        {
        if(s1==s2) pu=c;
        if(i+1>=j) break;   
        if(s1<=s2) {i++;s1=s1+v[i];}
        else {j--;s2=s2+v[j];}
         c++;
        }
        cout<<pu<<endl;
    }
        
    }
    

    return 0;
}