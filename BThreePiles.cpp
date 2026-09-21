#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;cin>>t;
    while (t>0)
    {long long int a,b,c;cin>>a>>b>>c;
    if(abs(a+c-b)>abs(a+0-b)) cout<<abs(a+c-b)<<endl;
    else cout<<abs(a-b)<<endl;
        /* code */
    t--;}
    

    return 0;
}