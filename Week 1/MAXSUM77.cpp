#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	 for (int i = 0; i <t; i++){
	     int a,b,s=0;cin>>a>>b;
	    
	     deque<int>d,p ;
	     for (int j = 0; j <a; j++){
	     int x;cin>>x;s=s+x;
	    
         d.push_back(x);
	     }
         for (int j = 0; j <=b; j++){
                int mx=0;
                for (int k = j; k <j+a-b; k++){
                mx=mx+d[k];

                }
                p.push_back(mx); 
         }    
        std::sort(p.rbegin(), p.rend());    
        cout<<p[0]<<endl;    
         
        
  
}
return 0;  
}
