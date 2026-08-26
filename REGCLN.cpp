#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a;cin>>a;
    for (int i = 0; i < 100; i=i+10)
    {
        if (a>=i && a<=i+10) {cout<<i+10-a;return 0;}
        else if(a%10==0) {cout<<"10";return 0;}
        
    }
    

    return 0;
}