#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;while (t>0)
    {int a;cin>>a;
    cout<<"2"<<endl;
    cout<<a<<" "<<a-1<<endl;
    int p=a;
    int q=a-2;
    while (((p+q)/2)!=2)
    {
        cout<<q<<" "<<p<<endl;
        p--;q--;
    }
    
    
        
        
    t--;}
    

    return 0;
}