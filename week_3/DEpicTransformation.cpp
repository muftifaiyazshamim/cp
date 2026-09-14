#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;while (t>0)
    {int a,c=0;cin>>a;vector<int>v;map<int,int>mp;
        vector<pair<int,int>>v2;
    for (int i = 0; i < a; i++)
    {
        int x;cin>>x;v.push_back(x);
        mp[x]++;      
    }
    priority_queue<int>p;
    for (auto [x,y]:mp )
    {
        p.push(y);
        // cout<<y<<"<-"<<x<<endl;
    }
    while (!p.empty())
    {
        if (p.size()<2)
        {
            break;
        }
        
        int x,y;
        x=p.top();
        p.pop();
        y=p.top();
        p.pop();
        x--,y--;
        if (x>=1)
        {
            p.push(x);
        }
        if(y>=1){
            p.push(y);

        }

    }
    int a=0;
    while (!p.empty())
    {
        a=a+p.top();
        p.pop();
    }
    cout<<a<<endl;
    
     
   t--;}
    
    

    return 0;
}