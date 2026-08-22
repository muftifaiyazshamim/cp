#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int a,b,c=0;
    cin>>a>>b;
    vector<long long int> su;
    for (long long int i = 0; i < a; i++)
    {
        long long int x;
        cin>>x;
        su.push_back(x);
    }
    for(long long int x:su){
        if(x!=b)cout<<x<<" " ;
    }

    return 0;
}