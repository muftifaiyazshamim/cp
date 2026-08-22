#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;cin>>t;
    while (t>0)
    {
        long long int a,mx=0,sum=0;cin>>a;
        vector<int> v;
        for (int i = 0; i <a; i++)
        {
            long long int x;cin>>x;v.push_back(x);mx=max(mx,x);
        }
        for (int i = 0; i < a; i++)
        {
            if (v[i]==mx) {sum = sum + 2*v[i]; break;}  
            sum=sum+v[i];
            
        }
        cout<<sum<<endl;
    t--;}
    

    return 0;
}