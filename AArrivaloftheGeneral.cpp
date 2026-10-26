#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a;cin>>a;
    int cu=0,mx,mn;

    vector<int>v;
    for (int i = 0; i < a; i++)
    {
        int x;cin>>x;v.push_back(x);
        if(i==0) {mx=x;mn=x;}
        else {
            mx=std::max(mx, x);mn=std::min(x, mn);
        }
        
    }
    if(mx==v[0] && mn==v[a-1]) std::cout << 0 << std::endl;
    else{
        int temp1=0,temp2=a-1;
        for (int i = 0; i < a; i++){
            if(v[i]==mx) {temp1=i;break;}
        }
        while(temp1>0){
            swap(v[temp1],v[temp1-1]);temp1--;cu++;
        }
        for (int i = a-1; i >= 0; i--){
            if(v[i]==mn) {temp2=i;break;}
        }
         while(temp2<a-1){
            swap(v[temp2],v[temp2+1]);temp2++;cu++;
        }
        std::cout << cu ;
    }   
      return 0;
}