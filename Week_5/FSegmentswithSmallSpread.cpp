#include <bits/stdc++.h>
using namespace std;

int main() {

    long long int a,x,su=0,pu=0;cin>>a>>x;
    vector<long long int>v;
    for (long long int i = 0; i < a; i++)
    {
        long long int x;cin>>x;v.push_back(x);
    }
    long long int l=0,r=0;
    multiset<long long int>ml;

    while(r<a){
       ml.insert(v[r]);
       while (*ml.rbegin()-*ml.rend())
       {
        ml.erase(ml.find(v[l]));
        l++;
       }
       pu=pu+l-r+1;
        r++;
    }
    cout<<pu<<endl;

    return 0;
}