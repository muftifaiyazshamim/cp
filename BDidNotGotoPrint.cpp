#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    
    for (int i = 0; i < t; i++)
    {
        int x,y;cin>>x;
        string s;cin>>s;
        s='#'+s;
        std::stack<int>st ;
        for(int j = 1; j <= s.size(); j++){
            if(s[j]=='1') {st.push(s[i]);}
            else if(s[j]=='2' && st.empty()) cout<<i<<endl;
            else if(s[j]=='2' && !st.empty()) cout<<st.top()<<endl;
        }
    }
    
    

    return 0;
}