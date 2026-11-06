#include <bits/stdc++.h>
using namespace std;

int main() {
int t;std::cin >> t;
while(t--){
    int a,cu=0,bu=0;cin>>a;
    string s;cin>>s;
    for(int i=0;i<a-1;i++) {
        if (s[i]!=s[i+1])
        {
            cu++;
        }
    }
    bu=a-1-cu;
    if (cu==2) bu=bu+1;
    else if(cu>=3) bu=bu+2;

    cout<<bu<<endl;

}
