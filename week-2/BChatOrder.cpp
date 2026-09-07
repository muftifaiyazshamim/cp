#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a;
    cin>>a;
    
    deque<string>ju;
    set<string> su;
    for (int i = 0; i < a; i++)
    
    {string s;cin>>s;
    ju.push_back(s);
    }
    int i=a-1;
     while (i>=0)
     {
        su.insert(ju[i]);
     
        
        ju.pop_back();

     i--;}
     for (auto i:ju )
     {
        cout<<i<<endl;
     }
     
    

    return 0;
}