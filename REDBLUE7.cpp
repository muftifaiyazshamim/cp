#include <bits/stdc++.h>
using namespace std;

int main() {
int t;cin>>t;while(t>0){
    long long int a;cin>>a;
    std::vector<long long int> v(a+1);
   for (int i = 1; i <= a; i++){
       cin>>v[i];
   }
    sort(v.begin()+1, v.end());
    vector<long long int>v2(a+1);
    v2[1]=v[1];
    for (int i = 2; i <= a; i++){
       v2[i]=v[i]+v2[i-1];
   }
   long long int ans=0;
    for (int i = 1; i <= a; i++){
        long long int su=v2[i]-v2[0];
        long long int bu=v2[a]-v2[i];
        long long int cu=i;
        long long int lu=a-i;
        long long int cur=su*lu+bu*cu;
        ans=max(ans,cur);
    }
    cout<<ans<<endl;
    
t--;}

}
