#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t--)
    {
        long long int n,cu=0,f=0;
        cin >> n;
        deque<long long int> v;
        for (long long int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            v.push_back(x);
            cu=cu+x;
            if(x==1)f++;

        }
        if(f==n) cout<<-1<<endl;
        else cout<<cu-1<<endl;
    }
    

    return 0;
}