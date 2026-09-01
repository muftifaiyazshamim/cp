#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a;
    cin>>a;
    deque<int>v;
    for (int i = 0; i < a; i++)
    {
        int x;cin>>x;v.push_back(x);
    }
    int s=0;
    int d=0;
    while(!v.empty())
    {
        int mx=max(v.front(),v.back());
        if(mx==v.front()){
            s=s+mx;
            v.pop_front();
            if(!v.empty()){
             mx=max(v.front(),v.back());
             d=d+mx;
             if(mx==v.front()) v.pop_front();
             else if (mx==v.back()) v.pop_back();
            }
            
        }
        else if(mx==v.back()){
            s=s+mx;
            v.pop_back();
            if(!v.empty()){
             mx=max(v.front(),v.back());
             d=d+mx;
             if(mx==v.front()) v.pop_front();
             else if (mx==v.back()) v.pop_back();
            }
        }
    }
    cout<<s<<" "<<d;
    return 0;
}