#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;cin>>t;
    for (int i = 0; i < t; i++)
    {
        long long int a,b,x=1;cin>>a>>b;
        while (true)
        {
        if(a*x%b==0) {cout<<x<<endl;break;}
        x++;
        }
        
        
    }
    

    return 0;
}