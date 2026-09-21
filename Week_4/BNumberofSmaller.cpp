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
    for (int i = 0; i < b; i++)
    {long long int c=0;
        for (long long int j = 0; j < b; j++)
        {
            if(v2[i]>v[j]) c++;
        }
        cout<<c<<" ";
    }
    
    

    return 0;
}