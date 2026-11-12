#include <bits/stdc++.h>
using namespace std;

int main() {
int t;cin>>t;
while(t--){
    long long int a,b,c,au,fu;cin>>a>>b>>c;
    au=0;fu=c;
    for(int i=0;i<a;i++){
        long long x=std::min(fu,b);
        au=au+x*x;
        fu=fu-x;
    }
    cout<<au<<endl;
}

}
