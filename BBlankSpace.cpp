#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        long long int n,cu=0,mx=0;
        cin >> n;
        vector<long long int> v;
        for (long long int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            if (x==0)
            {
                cu++;
                mx=max(mx,cu);
            }
            else cu=0;
          
        }
        cout<<mx<<endl;
    }
    return 0;
}