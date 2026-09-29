#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t--)
    {
        int a;cin>>a;
        
        for (int i = 1; i <= a; i++)
        
        {
            if(a==1){ cout<<1<<endl;break;}
            else if(((i*2)-2)==a||(a==(i*2)+1)) {cout<<i<<endl;break;}

        }
        
    }
    

    return 0;
}