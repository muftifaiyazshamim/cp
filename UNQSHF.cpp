#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t>0){
	    int al;string s,s2;cin>>al;
	    cin>>s;
	    cin>>s2;
        int a1=0,b1=0,a2=0,b2=0;
	    for (int i = 0; i < al; i++)
        {
            if(s[i]=='a') a1++;
            else if(s[i]=='b') b1++;
            else if(s2[i]=='a') a2++;
            else if(s2[i]=='b') b2++;
        }
	    if(al%2==0){
	        if(a1==a2 && b1==b2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
	        }
	   else{
            if((a1==a2-1 || a1-1==a2)&&(b1==b2-1 || b1-1==b2)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
           }
           
	     
	t--;}
}
