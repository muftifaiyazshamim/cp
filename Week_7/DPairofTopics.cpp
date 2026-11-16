#include <bits/stdc++.h>
using namespace std;

int main() {
    
long long int n;
cin >> n;
vector<long long int> v,v2;
for (long long int i = 0; i < n; i++)
{
    long long int x;
    cin >> x;
    v.push_back(x);
}

for (long long int i = 0; i < n; i++)
{
    long long int x;
    cin >> x;
    v2.push_back(x);
}
sort(v.begin(),v.end());
sort(v2.begin(),v2.end());
long long int l=0,r=n-1;
while (l<r)
{
    int i=0,j=i+1;
    int temp1=v[i]+v[j],temp2=v2[i]+v2[j];
    
}

    return 0;
}