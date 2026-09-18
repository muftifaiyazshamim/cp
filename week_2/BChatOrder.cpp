#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a;
    cin>>a;
    
    deque<string>ju;
    unordered_set<string> su;
    for (int i = 0; i < a; i++)
    
    {string s;cin>>s;
    ju.push_back(s);
    }
    int i=a-1;
     while (i>=0)
     {
        if (su.insert(ju[i]).second)
            cout<<ju[i]<<endl;

             
        ju.pop_back();

     i--;}
    
     
    

    return 0;
}