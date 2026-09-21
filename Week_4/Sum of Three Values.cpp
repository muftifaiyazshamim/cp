#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int a,b,c;cin>>a>>b;
    vector<long long int>v;
    for (long long int i = 0; i < a; i++)
    {
        long long int x;cin>>x;v.push_back(x);
    }
    for (long long int i = 0; i < a; i++)
    {
        for (long long int j = 1; j < a; j++)
        {
            for (long long int k = 2; k < a; k++)
            {
                if(v[i]+v[j]+v[k]==b) {cout<<i+1<<" "<<j+1<<" "<<k+1;return 0;}
            }
            
        }
        
    }
    cout<<"IMPOSSIBLE";
    

    return 0;
}