#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;while (t>0)
    {int a,b,k=1,earn=0;cin>>a>>b;
        earn=b*k*k;//day 1 earning
        int cost=-(b*k*k);
        for (int i = 2;; i++)
        {
            earn=earn+(b*k*k);
            if (earn>=a){ earn=earn-a;k++;} 
            cost=cost-earn;
           
        }
        
        
    t--;}
    

    return 0;
}