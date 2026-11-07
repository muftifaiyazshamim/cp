#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int n,q;
    cin >> n;
    vector<long long int> v,v2;
    for (long long int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    cin >> q;
    for (long long int i = 0; i < q; i++)
    {
        long long int x,cu=0,j=0;
        cin >> x;
        cu=upper_bound(v.begin(), v.end(), x)-v.begin();
        cout<<cu<<endl;
    }

    return 0;
}