#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a;cin>>a;
    cin.ignore();
    set<string> s;
    for (int i = 0; i < a; i++)
    {   string x;
        getline(cin,x);
        
        s.insert(x);
        
    }
    for (auto x:s)
    {
        cout<<x<<endl;
    }

    return 0;
}