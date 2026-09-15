#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    for (int i = 0; i < t; i++)
    {
        int a,b;cin>>a>>b;
        set<int>v;
        for (int j = 0; j < a; j++)
        {
            int x;cin>>x;v.insert(x);
        }
        cout<<b-v.size()<<endl;
        
    }
    

    return 0;
}