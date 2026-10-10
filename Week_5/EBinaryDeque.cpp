#include <bits/stdc++.h>
using namespace std;

int main() {
long long int a;cin>>a;
while (a--)
{
deque<long long int>v;
long long int x,y;cin>>x>>y;
for (int i = 0; i < x; i++)
{
    long long int su;cin>>su;v.push_back(su);
}
long long int l=0,r=0,su=0,mx=0;
while (r<x)
{
    su=su+v[r];
    while (su>y)
    {
        su=su-v[l];
        l++;
    }
    if (su==y) mx=max(mx,r-l+1);
    r++;
}
    if (mx == 0) cout<<-1<<endl;
    else cout <<x-mx<<endl;
}


    return 0;
}