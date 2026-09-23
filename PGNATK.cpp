#include <bits/stdc++.h>
using namespace std;

int main() {
int t;cin>>t;
while(t>0){
    int a,b,f;cin>>a>>b;
    if(a<b) cout<<a<<endl;
    else{
        for (int i = 1,j=1; ; i++)
        {
            if(j==a) {f=i;break;}
            if(i%b==0)i++;
            
        }
        cout<<f<<endl;
    }
    


    t--;}

return 0;
}
