#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a,b,c,d,e,ans=0;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    set<int>s;
    for (int i = a; i <= e; i=i+a)
    {
        s.insert(i);
    }
    for (int i = b; i <= e; i=i+b)
    {
        s.insert(i);
    }for (int i = c; i <= e; i=i+c)
    {
        s.insert(i);
    }for (int i = d; i <= e; i=i+d)
    {
        s.insert(i);
    }
   
    cout<<s.size();

    return 0;
}