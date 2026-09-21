#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;while (t>0)
    {int a;cin>>a;
        
        vector<int>v;
        for (int i = 0; i < 3; i++)
        {
            int x;cin>>x;v.push_back(x);
            

        }
        sort(v.begin(),v.end());
        cout<<a-v[0]<<endl;
        
        
        
    t--;}
    

    return 0;
}