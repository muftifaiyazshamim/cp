#include <bits/stdc++.h>
using namespace std;

int main() {
int t;cin>>t;
while(t--){
    int a;cin>>a;
    std::vector<int> v,ans;
    for(int i=0;i<a;i++){
        int x;cin>>x;v.push_back(x);
    }
    int mx=0;
    for(int i=0;i<a;i++){
        if(v[i]%2==1) mx++;
        if(mx%2==0) ans.push_back(i+1);
    }
    mx=0;
    for(int i=a-1;i>=0;i--){
        if(v[i]%2==1) mx++;
        if(mx%2==0) ans.push_back(a-i);
    }
     
    std::sort(ans.rbegin(), ans.rend());
    cout<<ans[0]<<endl;    
}
}
