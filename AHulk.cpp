#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    for (int i = 1; i <= t; i++)
    {
        if(i%2==0) cout<<"I love";
        else cout<<"I hate";
        if(t==i) cout<<" it ";
        else cout<<" that ";
    }
    
    return 0;
}