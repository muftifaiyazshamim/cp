#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    for (int i = 0; i < t; i++)
    {
        int a;cin>>a;int c=0;
        vector<int>v,v2;
        for (int j = 0; j <a; j++)
        {
            int x;cin>>x;v.push_back(x);
            if(x%2==1) c++;
        }
        if(c==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    

    return 0;
}