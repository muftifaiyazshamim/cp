#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    vector<long long int> v;
    for (long long int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        v.push_back(x);
    }
    
    long long int su1=0,su2=0,ans=0,i = 0,j=n-1;
    while (i<=j)
    {
        if (su1<=su2)
        {
            su1=su1+v[i];
            i++;
        }
        else {
            su2=su2+v[j];
            j--;
        }
        if (su1==su2)
        {
            ans=su1;
        }
        
    }
    cout<<ans;

    return 0;
}