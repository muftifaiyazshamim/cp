#include <bits/stdc++.h>
using namespace std;
bool isPrime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i <= n / i; i++)
        if (n % i == 0) return false;
    return true;
}
int main() {
    
    long long int a;cin>>a;
    if (isPrime(a)) cout<<1<<"\n";
    else if(a%2==0) cout<<"2\n";
    else {
        if(isPrime(a-2)) cout<<"2\n";
        else cout<<"3\n";
    }

    return 0;
}