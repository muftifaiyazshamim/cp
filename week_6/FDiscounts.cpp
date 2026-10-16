#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t--)
    {
        int a,b;cin>>a>>b;
        deque<int>v,v2;
        for (int i = 0; i < a; i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        for (int i = 0; i < b; i++)
        {
            int x;cin>>x;v2.push_back(x);
        }
        sort(v.rbegin(),v.rend());
        sort(v2.begin(),v2.end());

        long long int c=0;
        for (int i = 0; i < a; i++)
        {
            c=c+v[i];
        }
        int l=0;
        for (int i = 0; i < b; i++)
        {
            
            if (l>=a) break;
            l=l+v2[i]-1;
            if (l>=a) break;
            c=c-v[l];l++;                            
        }
         cout<<c<<endl;   
    
    }
    

    return 0;
}