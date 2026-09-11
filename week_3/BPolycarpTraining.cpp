#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a;cin>>a;vector<int>su;
    for (int i = 0; i < a; i++)
    {
        int c;cin>>c;su.push_back(c);
    }
    int cu=0;
    int i=1;
    sort(su.begin(),su.end());
    for (auto x:su)
    {
        if(x>=i) {cu++;i++;}
        
    }
    cout<<cu;

    return 0;
}