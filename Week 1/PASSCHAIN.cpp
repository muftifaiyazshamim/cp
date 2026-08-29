#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t>0){
	    int x=1,n,k;
	    cin>>n>>k;
	    for (int i = 0; i < n; i++)
        {
            if(x+k<=n) x=x+k;  
        }
        cout<<x<<endl;
	    
	    
	    
	    
	t--;}

}
