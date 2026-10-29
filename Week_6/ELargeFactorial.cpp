#include <bits/stdc++.h>
using namespace std;
const long long int eu=1e9+7; 
long long int fact(long long int n){
    if(n<=1) return 1;
    return n*fact(n-1)%eu;
}
int main() {
long long int t;cin>>t;
while(t--){
long long int a;cin>>a;
std::cout << fact(a)<<" ";
}

}
