#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t>0)
    {int a,c=0;cin>>a;
        vector<int>v(a);
        for (int i = 0; i < a; i++)
        {
            cin>>v[i];
            if(v[i]>=v[0]) c++;
        }
        
        cout<<c<<endl;
    t--;}
    

    return 0;
}