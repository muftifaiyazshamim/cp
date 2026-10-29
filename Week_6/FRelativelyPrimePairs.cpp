#include <bits/stdc++.h>
using namespace std;
 
int main() {
long long int r,l,c,f=0;cin>>l>>r;
c=(r-l+1)/2;
std::vector<pair<long long int,long long int>>v ;
for(long long int i=l;i<r;i=i+2){
    if(i==r-1) f=1;
    v.push_back({i,i+1});
}
if(f==1){
    std::cout << "YES" << std::endl;
    for(auto [x,y]:v){
        cout<<x<<" "<<y<<"\n";
    }
}
else std::cout << "NO" << std::endl;
 
}