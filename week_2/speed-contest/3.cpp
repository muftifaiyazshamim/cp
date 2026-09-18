#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t>0)
    {
        int a,b,c;cin>>a>>b>>c;
        int mx=min(a,min(b,c));
        if(mx>0) cout<< mx*10+((a+b+c)-3*mx)*3<<endl;
        // else if(mx>0 && mx==b) cout<< b*10+((a+c)-b)*3<<endl;
        // else if(mx>0 && mx==c) cout<< c*10+((a+b)-c)*3<<endl;
        else cout<<(a+b+c)*3<<endl;

         /* code */
    t--;}
    

    return 0;
}