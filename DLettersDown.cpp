#include <bits/stdc++.h>
using namespace std;

int main() {
int t;std::cin >> t;
while(t--){
    int a,c=0;std::cin >> a;
    string s,s1,s2;std::cin >> s;
    int fu[26]={0};
    if(s.size()%2==0){
    s1=s.substr(0,s.size()/2);
    s2=s.substr(s.size()/2,s.size());
    }
    else{
    s1=s.substr(0,s.size()/2);
    s2=s.substr((s.size()/2)+1,s.size());
    }
    for(int i=0,j=s2.size()-1;i<s1.size();i++,j--){
        int lu=std::min(s1[i], s2[j])-'a';
        int hu=std::max(s1[i], s2[j])-'a';
        for(int k=lu;k<hu;k++){
            fu[k]=1;
        }
    }
    for(auto x:fu) c=c+x;
    std::cout << c << std::endl;
    
}
}
