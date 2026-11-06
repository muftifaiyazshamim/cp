#include <bits/stdc++.h>
using namespace std;

int main() {
int t; std::cin >> t;
while(t--){
    int a,b,l1=0,l2=0,r1=INT_MAX,r2=0;cin>>a>>b;
    std::vector<string> v;
    int f=0;
    for(int i=0;i<a;i++){
        string s;cin>>s;v.push_back(s);
            for(int j=0;j<s.size();j++){
                if(s[j]=='1') {
                    if(f==0){l1=i+1;f=1;}
                    l2=i+1;
                    if(r1>j+1) r1=j+1;
                    if(r2<j+1) r2=j+1;;
                }
            }
            
        }
        cout<<(l2-l1+1)*(r2-r1+1) <<endl;
        
    }
    
}


