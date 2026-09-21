#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int a,b;cin>>a>>b;
    vector<long long int>v3;
    for (long long int i = 0; i < a; i++)
    {
        long long int x;cin>>x;v3.push_back(x);
    }
    for (long long int i = 0; i < b; i++)
    {
        long long int x;cin>>x;v3.push_back(x);
    }
    sort(v3.begin(),v3.end());
    for (auto x:v3)
    {
        cout<< x<< " ";
    }
    

    return 0;
}