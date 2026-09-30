#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int n,m,k;cin>>n>>m>>k;
	    std::vector<int>v,v2(n);
	    v2[0]=1;
	    for(int i=1;i<n;i++){
	    v2[i]=v2[i-1]+1;
	        
	    }
	    for(int i=0;i<m;i++){
	        int x;cin>>x;v.push_back(x);
	    }
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	        if(v[i]!=v2[j]) cout<<v[i]<<" ";
	            
	        }
	    }
	    cout<<endl;
	}

return 0;
}
