#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t--)
    {
        int a;cin>>a;
        if(a%2==0){
            for (int i = 0; i < a/2; i++)
            {
                if(i%2==0) cout<<1;
                else cout<<0;
            }
             for (int i = 0; i < a/2; i++)
            {
                if(i%2==0) cout<<1;
                else cout<<0;
            }
            cout<<endl;
        }
        else{
            for (int i = 0; i < a; i++)
            {
                if(i%2==0)cout<<0;
                else cout<<1;
            }
            cout<<endl;
        }
        
    }
    

    return 0;
}