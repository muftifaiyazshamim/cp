
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;cin>>t;
    while (t>0)
    {long long int a,mx=0;cin>>a;
    vector<long long int>v,s;
    for (long long int i = 0; i < a; i++)
    {
        long long int x;cin>>x;v.push_back(x);mx=max(mx,x);
    }
    long long int sum=0,index;
    for (long long int i = 0; i < a; i++)
    {
       for (long long int j = i+1; j < a; j++)
       {
        if(v[i]<=v[j]) {sum=0;sum=sum+v[i]+v[j]; s.push_back(sum);}
       }
       
    }
    sort(s.begin(),s.end());
    if(s.size()>0) cout<<max(mx,s[s.size()-1])<<endl;
    else cout<<mx<<endl;
t--;}

    return 0;
}