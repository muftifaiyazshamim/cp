#include <bits/stdc++.h>
using namespace std;

int main() {
long long int t;cin >> t;
while(t--){
    long long int a,b,c;cin>>a>>b>>c;
    long long int tem1=max(a, b);
    for(long long int i=a,j=b;abs(i-j)>c;){
       if(i<j) i=i+a;
       else j=j+b;
       tem1=max(i,j);
   }
   cout<<tem1<<endl;
}

}
