#include <bits/stdc++.h>
using namespace std;

int main() {
int t;cin>>t;while(t>0){
    int a;cin>>a;
    std::vector<int> v;
    for (int i = 0; i < a; i++){
        int x;cin>>x;v.push_back(x);
    }
    for (int i = 0; i < a-1; i++){
        if(abs(v[i]-v[i+1])>1) std::swap(v[i], v[i+1]);
    }
    for (int i = 0; i < a; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

t--;}

}
