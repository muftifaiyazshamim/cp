#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t>0){
    int a,o=0,r=0;cin>>a;
    vector <int> v;
    for (int i = 0; i <a; i++)
    {
        int x;cin>>x;v.push_back(x);
        if (x==1) o++;
        if (x>=2) r++;
        
    }
    int to=o/2;
    if (o%2==1) to=to+1;
    cout<<to+r<<endl;
    t--;}
    return 0;
}