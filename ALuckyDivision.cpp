#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a;cin>>a;
    bool t=false;
    for (int i = a; i > 0; i=i/10)
    {
        int temp=i%10;
        if(temp==7||temp==4) t=true;
        else {t=false;break;}
    }
    
    if(t||a%4==0||a%7==0) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}