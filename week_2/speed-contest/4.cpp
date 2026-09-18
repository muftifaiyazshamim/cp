#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;while (t>0)
    {float a,b;cin>>a>>b;
    if (a/100>b/225) cout<<"Large"<<endl;
    else if (a/100<b/225) cout<<"Small"<<endl;
    else
    {
        cout<<"Equal"<<endl;
    }
    
        
    t--;}
    
    

    return 0;
}