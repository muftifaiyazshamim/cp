#include <bits/stdc++.h>
using namespace std;
const long long int og=1e9+7;
long long int pohr(long long int a,long long int b){
    if(b==0) return 1;
    long long int temp=pohr(a,b/2);
    temp=temp*temp%og;
    if (b%2==1) temp=temp*(a%og)%og;
   return temp;


}
int main() {
    
    int t;cin>>t;
    while (t--)
    {
        long long int a,b;cin>>a>>b;
       
        cout<<pohr(a,b)<<"\n";
        
    }
    

    return 0;
}