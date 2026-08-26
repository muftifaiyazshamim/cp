#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	for(int i=0;i<t;i++){
	    long long int a,o=0,e=0;
        cin>>a;
	    vector<long long int>v ;
	    for(int j=0;j<a;j++){
	        long long int x;cin>>x;v.push_back(x);
            if (x%2==0) e++;
            else o++;
            
	    }
        if(e==o) cout<<o+e<<endl;
        else if(e>o) cout<<o+2<<endl;
        else  cout<<e+2<<endl;
	    
	    
	}

}
