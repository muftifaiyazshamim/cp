#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a;cin>>a;
    for (int j = 1; j <= a; j++)
    {
    bool t=false;  
    
    for (int i = j; i > 0; i=i/10)
    {
        int temp=i%10;
        if(temp==7||temp==4) t=true;
        else {t=false;break;}
    }
    if(t && a%j==0) {cout<<"YES";return 0;}

    }
     cout<<"NO";
    
    return 0;
}