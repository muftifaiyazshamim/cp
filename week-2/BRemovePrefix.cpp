#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t,f;cin>>t;while (t>0)
    {int a;cin>>a;
     set<int>s;
     for (int i = 0; i < a; i++)
     {
            int x;cin>>x;s.insert(x);   

     }
    cout<<a-s.size()<<endl;
     

        /* code */
    t--;}
    

    return 0;
}