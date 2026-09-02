#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t>0){
	    int a,s=0;
	    vector<int>v,v2(a),v3(a);
	    for(int i=0;i<a;i++){
	        int x;cin>>x;v.push_back(x);s=s+x;
	    }

	    for(int i=0;i<a;i++){
	        if(i%2==0) {v2[i]==1;v3[i]==-1;}
            else {v2[i]==-1;v3[i]==1;}
	    }
        
        if (s==0)cout<<1<<endl;
        else{
          
            
            
        }
        
        
	    
	t--;}

}
