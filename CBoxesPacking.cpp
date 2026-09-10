#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    vector<int>v;
    while (t>0)
    {
        int a;cin>>a;v.push_back(a);
        t--;
    }
    sort(v.begin(),v.end());
    int c=1,cu=1;
    for (int i = 0; i < v.size()-1; i++)
    {
        if(v[i]<v[i+1]) c=1;
        else c++; 
        cu=max(cu,c);
    }
    cout<<cu;
    

    return 0;
}