#include <bits/stdc++.h>
using namespace std;
//suport session 55:53
int main() {
    
    int t;cin>>t;
    while(t>0){
        int a,b,bl=b,mx=0,c=0;cin>>a>>b;
        vector<int> v;
        vector<int> v2;

        for (int i = 0; i < a; i++)
        {
            int x;cin>>x;v.push_back(x); mx=max(mx,v[i]);
        }
        for (int i = 0; i < a; i++){
           if(mx!=v[i] ) 
            {
               
           v2.push_back(v[i]);
            // cout<<mx<<endl;
            } 

           
        }
        for (int i = 0; i < v2.size(); i++)
        {
           if(v2[i]!=mx) c++;
        }
        
        cout<<c<<endl;


        t--;
    }


    return 0;
}