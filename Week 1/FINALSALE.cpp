#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;cin>>t;
    while (t>0)
    {
       long long  int a,mx=0,sum=0;cin>>a;
        vector<long long int> v,v2;
        for (long long int i = 0; i <a; i++)
        {
            long long int x;cin>>x;v.push_back(x);
        }
        
        for (int i = 0; i < a; i++)
        {
            sum=sum+v[i];
            mx=max(mx,(sum-v[i])+(2*v[i]));
        }
       cout<<mx<<endl;
    t--;}
    

    return 0;
}