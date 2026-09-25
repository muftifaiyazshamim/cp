#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int a,b;cin>>a>>b;
    vector<long long int>v,v2,v3;
    for (long long int i = 0; i < a; i++)
    {
        long long int x;cin>>x;v.push_back(x);
    }
    for (long long int i = 0; i < b; i++)
    {
        long long int x;cin>>x;v2.push_back(x);
    }
    long long int ju=0,i=0,j=0;
    while (i<a && j<b)
    {
    long long int cur=v[i],c1=0,c2=0;
    while (i< a && v[i]==cur)
    {
        c1++;i++;
    }
    while (j<b && cur>v2[j])
    {
        j++;
    }
    while (j<b && v2[j]==cur)
    {
        c2++;j++;
    }
    ju=ju+(c1*c2);
        
    }
    
    cout<<ju;

    return 0;
}