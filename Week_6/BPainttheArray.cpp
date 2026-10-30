#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;cin>>t;
    while (t--)
    {
        long long int a,g1=0,g2=0;cin>>a;
        vector<long long int>v,od,ev;
        for (long long int i = 0; i <a; i++)
        {
            long long int x;
            cin>>x; v.push_back(x);
            if(i%2==0) ev.push_back(x);
            else od.push_back(x);
        }
        for (long long int i = 0; i < ev.size(); i++)
        {
           g1=gcd(g1,ev[i]);
            
        }
        for (long long int i = 0; i < od.size(); i++)
        {
           g2=gcd(g2,od[i]);
            
        }
        long long int as=0,f=0;
        for (long long int i = 1; i <v.size(); i=i+2)
        {
           if(v[i]%g1==0) f=1;
            
        }
        if(f==0) as=g1;
        else{
            long long int fu=0;
            for (long long int i = 0; i <v.size(); i=i+2)
            {
           if(v[i]%g2==0) fu=1;
            
            }
            if (fu==0)
            {
                as=g2;
            }
            
        }
        cout<<as<<"\n";

        
    }
    

    return 0;
}