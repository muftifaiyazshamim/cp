#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t,c;cin>>t;
    vector<int>dam;
    for (int i = 0; i < t; i++)

    {
        c=1;int x;cin>>x;
        
       if(c<=4) {
        int mx=max(200,100*x);
        dam.push_back(mx);
        }
       else{
        int baki=c%4;
        for (int i = c; i%4!=0 ; i=i%4)
        {
             int mx=max(200,100*i);
            dam.push_back(mx);

        }

        
       }
       
       
      
    }
    for (auto x:dam)
    {
        cout<<x<<endl;
    }
    

    return 0;
}