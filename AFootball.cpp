#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;cin>>s;
    int z=0,o=0;
    if(s.size()<7) {cout<<"NO";return 0;}
    for (int i = 0; i <= s.size()-7; i++)
    {
        string su=s.substr(i,7);
        if(su=="1111111") o++;   
        else if(su=="0000000") z++;

    }
     
    if(s.size()>=7 &&  (z>0||o>0)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}