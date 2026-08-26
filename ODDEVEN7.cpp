#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	for(int i=0;i<t;i++){
	    long long int a,o=0,e=0;
        cin>>a;
	    vector<long long int>v,me,mo,n ;
	    for(int j=0;j<a;j++){
	        long long int x;cin>>x;v.push_back(x);
	    }
	   
	    for(int j=0;j<min(o,e);j++){
	        if(o>e){
                if(v[i]%2==0){    
	            n.push_back(v[i]);
                }
	        else if (o<e){
	            n.push_back(mo[i]);
	             n.push_back(me[i]);
	        }
	    }
      cout<<n.size()<<endl;
	    
	}

}
