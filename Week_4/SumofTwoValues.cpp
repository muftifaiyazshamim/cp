#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,x;
    cin >> n >> x;
    map<long long int, long long int> mp;
    for(long long int i = 0; i < n; i++){
        long long int a; cin >> a;
        long long nd = x - a;
        if(mp.count(nd)){ cout << mp[nd] << " " << i + 1; return 0;}
        mp[a] = i + 1;
    }
    cout << "IMPOSSIBLE";
    return 0;
}