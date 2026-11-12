#include <bits/stdc++.h>
using namespace std;

int main() {
int t;cin >> t;
while(t--){
    string s,s1,s2;cin >> s;
    if(s.size()%2==0){
        s1=s.substr(0,s.size()/2);
        s2=s.substr(s.size()/2,s.size());
        std::sort(s1.begin(), s1.end());
        std::sort(s2.begin(), s2.end());
        if(s1==s2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else {
        s1=s.substr(0,s.size()/2);
        s2=s.substr((s.size()/2)+1,s.size());
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if(s1==s2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }

}

}
