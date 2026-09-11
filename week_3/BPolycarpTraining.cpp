#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a;cin>>a;set<int>su;
    for (int i = 0; i < a; i++)
    {
        int c;cin>>c;su.insert(c);
    }
    int cu=0;
    int i=1;
    for (auto x:su)
    {
        if(x>=i) cu++;
        i++;
    }
    cout<<cu;

    return 0;
}