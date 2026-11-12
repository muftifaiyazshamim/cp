#include <bits/stdc++.h>
using namespace std;

int main() {
int t;std::cin >> t;
while(t--){
    int a,c=0;std::cin >> a;
    std::vector<int>v,v2 ;
    std::map<int, int>mp ;
    for(int i=0;i<a;i++){
        int x;std::cin >> x;v.push_back(x);
        mp[x]++;
    }
    std::sort(v.begin(), v.end());
    set<int>s;
    for(auto [x,y]:mp){
    if(y<2) c++;
    else c=c+2;
    }
    std::cout << c << std::endl;
    for(auto x:v){
        s.insert(x);
    }
    for(auto x:s){
        std::cout << x << " ";
    }
    for(auto [x,y]:mp){
        for(int i=0;i<y-1;i++) v2.push_back(x);
    }
    std::sort(v2.rbegin(), v2.rend());
    for(auto x:v2){
        std::cout << x << " ";
    }
    cout<<endl;
    
}
}
