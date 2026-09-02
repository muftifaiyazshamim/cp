#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	 for (int i = 0; i <t; i++){
	     int a,b,s=0;cin>>a>>b;
	    
	     deque<int>d ;
	     for (int j = 0; j <a; j++){
	     int x;cin>>x;s=s+x;
	    
         d.push_back(x);
	     }
         for (int j = 0; j <b; j++){
            
            {
                if(min(s-d.front(),s-d.back())==s-d.front()){
                    if(j==b-1) break;
                    
                    s=s-d.front();
                    d.pop_front();
                    
                } 
                else if(min(s-d.front(),s-d.back())==s-d.back()){
                    if(j==b-1) break;
                    
                    s=s-d.back();
                    d.pop_back();
                }
            }
            
         
         int su=0;
         for(auto y:d){
             su=su+y;
         }
         cout<<su<<endl;
	     
        }
  
}
return 0;  
}
