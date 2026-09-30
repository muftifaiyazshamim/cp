#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a,b;cin>>a>>b;
    vector<int>v;
    for (int i = 0; i < a; i++)
    {
        int x;cin>>x;v.push_back(x);
    }
    int su=0;
    for (int i = 0; i < a; i++)
    {
        if(v[i]>b)su=su+2;
        else  su=su+1;
    }
    cout<<su<<endl;

    return 0;
}