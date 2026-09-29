#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t; 
    long long int su=0;
    vector<long long int>v;
   for (int i = 0; i < t; i++)
    {
        long long int a,b;cin>>a>>b;
        if(i==0){  su=su+b;}
        else {su=su-a; su=su+b;}
        v.push_back(su);
    }
   std::sort(v.rbegin(), v.rend());
    cout<<v[0];
    return 0;
}