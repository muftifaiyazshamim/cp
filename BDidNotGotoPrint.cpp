#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    
    for (int i = 0; i < t; i++)
    {
        int x,y;cin>>x;
        string s;cin>>s;
        std::stack<int>st ;
        for(int j = 0; j < s.size(); j++){
            if(s[j]=='1') st.push(s[i]);
            else if(s[j]=='2' && st.empty())
        }
    }
    
    

    return 0;
}