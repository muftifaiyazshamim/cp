#include <bits/stdc++.h>
using namespace std;
const long long int og=1e9+7;
long long int pohr(long long int a,long long int b){
   long long int temp=1;
   a=a%og;
   for (int i = 0; i < b; i++)
   {
    temp=a*temp%og;
   }
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