#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t>0)
    {int a,b,s=0;cin>>a>>b;
        vector<int>v;
        for (int i = 0; i < a; i++)
        {
            int x;cin>>x;v.push_back(x);
            s=s+x;
        }
        if(s==b) cout<<"NO"<<endl;
        else if(s<b){
             cout<<"YES"<<endl;
            for (auto x: v)
            {
                cout<<x<<" ";
            }
            cout<<endl;
            }
        else{
            cout<<"YES"<<endl;
            sort(v.rbegin(),v.rend());
            int su=0;
            for (int i = 0; i < v.size(); i++)
            {
                su=su+v[i];
                if(su==b) {swap(v[i],v[i+1]);break;}
            }
            for (auto x: v)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }    
        
    t--;}
    

    return 0;
}