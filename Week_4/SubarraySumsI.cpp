#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int n,x,su=0,sum=0;;
    cin>>n>>x;
    vector<long long int>v;
    for (int i = 0; i < n; i++)
    {
       long long int x;cin>>x;v.push_back(x);
    }

    for (int i = 0,j=0; i < n;)
    {
       
    if (sum<x)  {sum=sum+v[j];j++;}
    else if(sum>x) {sum=sum-v[i]; i++;}
    else {su++;sum=sum-v[i]; i++;}
            
    }
    cout<<su;
    
    

    return 0;
}