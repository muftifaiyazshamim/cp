#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t--)
    {
        int a,b;cin>>a>>b;
        int as1=-1,as2=-1;
        
        if(2*a<=b) {
            as1=a;as2=2*a;
        }
       std::cout << as1 <<" " <<as2<< std::endl;
    }
    return 0;
}