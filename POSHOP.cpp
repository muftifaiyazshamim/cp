
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t>0)
    {int a,mx=0;cin>>a;
    vector<int>v,s;
    for (int i = 0; i < a; i++)
    {
        int x;cin>>x;v.push_back(x);mx=max(mx,x);
    }
    int sum=0,index;
    for (int i = 0; i < a; i++)
    {
        if(v[i]>v[i+1]) {s.push_back(v[i]);s.push_back(v[i+1]);i++;}
    }
    for (int i = 0; i < a; i++){

    }    
        
    t--;}
    

    return 0;
}