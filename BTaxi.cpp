#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a;cin>>a;
    int cu=0;

    vector<int>v;
    for (int i = 0; i < a; i++)
    {
        int x;cin>>x;v.push_back(x);cu+=x;
    }
    if (cu%4==0) cout<<cu/4;
    else cout<<(cu/4)+1;
    
    

    return 0;
}