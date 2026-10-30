#include <bits/stdc++.h>
using namespace std;
int main() {
long long int t,mx=0,su=0,au=0;
cin >> t;
vector<long long int> v;
for (long long int i = 0; i < t; i++)
{
    long long int x;
    cin >> x;
    v.push_back(x);
    if (i==0) mx=x;
    else mx=max(mx,x);
}
for (long long int i = 0; i < t; i++){
su=su+mx-v[i];
}
for (long long int i = 0; i < t; i++)
{
    au=gcd(au,mx-v[i]);
}
cout<<su/au<<" "<<au;

    return 0;
}