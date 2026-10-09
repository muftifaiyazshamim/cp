#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t,a;cin>>t>>a;
    vector<int>v;
    for (int i = 0; i < t; i++)
    {
        int x;cin>>x;v.push_back(x);
    }
    sort(v.begin(),v.end());
    int c=0;
    for (auto x:v)
    {
        if(x<=a && a-x>0) {c++;a=a-x;}
        else break;
    }
    cout<<c;
    

    return 0;
}