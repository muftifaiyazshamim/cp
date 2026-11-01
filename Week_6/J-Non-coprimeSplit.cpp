#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;cin>>t;
    while (t--)
    {
        long long int l,r;
        cin >> l>>r;
        if (l<r)
        {
            long long int su;
            if (r%2==0) su=r;
            else su=r-1;

            if(su>=4) cout<<2<<" "<<su-2<<endl;
            else cout<<-1<<endl;
            
        }
        else
        {
            long long int fu=0;
            for (long long int i = 2; i * i<= l; i++)
            {
                if (l%i==0)
                {
                    cout<<i<<" "<<l-i<<endl;
                    fu=1;
                    break;
                }
                
            }
            if (fu==0)
            {
                cout<<-1<<endl;
            }
            
        }
        
        
        
    }
    

    return 0;
}