#include <bits/stdc++.h>
using namespace std;

int main() {
int t;cin>>t;while(t>0){
    long long int a;cin>>a;
    std::vector<long long int> v;
   for (int i = 0; i < a; i++){
       long long int c;cin>>c;v.push_back(c);
   }
    std::sort(v.begin(), v.end());
    long long int m=v.size()/2;
    long long int p1=0,p2=0,p1c=0,p2c=0;
    for (int i = 0; i <= m; i++){
        p1=v[i]+p1;p1c++;
    }
    for (int i = m+1; i < v.size(); i++){
        p2=p2+v[i];p2c++;
    }
    cout<<p1*p2c+p2*p1c<<endl;
t--;}

}
