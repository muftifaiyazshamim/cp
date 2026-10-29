#include <bits/stdc++.h>
using namespace std;

int main() {
int t;cin>>t;
while(t--){
    int a,cu=0;cin>>a;
   deque<int> v;
    for(int i=0;i<a;i++){
        int x;std::cin >> x;v.push_back(x);
    }int iu=0;
    while(v.size()!=1){
        int temp=v[iu+1]-v[iu];
        v.pop_front();v.pop_front();
        v.push_front(temp);
    }   
    cout<<v[0]<<endl;
}

}
