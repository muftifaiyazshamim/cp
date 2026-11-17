#include <bits/stdc++.h>
using namespace std;

int main() {
long long int n,su=0;
cin >> n;
vector<long long int> v,v2,v3;
for (long long int i = 0; i < n; i++)
{
    long long int x; cin >> x;
    v.push_back(x);
}
for (long long int i = 0; i < n; i++)
{
    long long int x; cin >> x;
    v2.push_back(x);
    v3.push_back(v[i]-v2[i]);
}
sort(v3.begin(),v3.end());
long long int l=0,r=n-1;
while (l<r)
{
    if (v3[l]+v3[r]>0)
    {
        su=su+(r-l);
        r--;
    }
    else  l++;
}
cout<<su<<endl;
    return 0;
}