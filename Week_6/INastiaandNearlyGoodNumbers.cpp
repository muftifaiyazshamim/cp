#include <bits/stdc++.h>
using namespace std;

int main() {
long long int c,f=0,t;cin>>t;
while(t--){
    long long int r,l,rl;cin>>l>>r;
    rl=l*r;
    if(r>1 ){
        std::cout << "YES" << std::endl;
        std::cout <<l<<" "<<l*(2*r-1)<<" "<<2*rl << std::endl;
        
    }
    else{
        std::cout << "NO" << std::endl;
    }
}

}
