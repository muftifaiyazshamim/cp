#include <bits/stdc++.h>
using namespace std;

int main() {
int t;std::cin >> t;
while(t--){
    long long int a;cin>>a;
    vector<long long int>v,p(a+1),s(a+1);
    for(long long int i=0;i<a;i++){
        long long int x;std::cin >> x;v.push_back(x);
    }
    p[0]=v[0];
    s[a-1]=v[a-1];
    for(long long int i=1;i<a;i++){
        p[i]=p[i-1]+v[i];
    }
    for(long long int i=a-2;i>=0;i--){
        s[i]=s[i+1]+v[i];
    }
    long long int bu=LLONG_MAX,id=0;
    for(long long int i=0;i<a;i++){
    if(p[i]+s[i]<bu){
        bu=p[i]+s[i];
        id=i;
        }
    }
    cout<<++id<<endl;
}

}