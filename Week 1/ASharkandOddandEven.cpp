#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int a,sum=0;cin>>a;
    vector<int> v;
    for (int i = 0; i < a; i++)
    {
        long long int x;cin>>x;v.push_back(x);sum=sum+x;
    }
    sort(v.begin(),v.end());
    if (sum %2==0) cout<<sum;
    else{
        for (int i = 0; i < a; i++)
        {
            
            if ((sum-v[i])%2==0)
            {
                cout<<sum-v[i];return 0;
            }
            

            
        }
        
    }

    return 0;
}