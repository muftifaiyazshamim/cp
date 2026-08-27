#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t>0)
    {int a,mx=0;cin>>a;
    vector<int>v,s;
    for (int i = 0; i < a; i++)
    {
        int x;cin>>x;v.push_back(x);mx=max(mx,x);
    }
    int sum=0,index;
    for (int i = 0; i < a-1; i++)
    {
       for (int j = i+1; j < a; j++)
       {
        if(v[i]<=v[j]) {sum=0;sum=sum+v[i]+v[j]; s.push_back(sum);}
       }
       
    }
    sort(s.begin(),s.end());
    cout<<max(mx,s[s.size()-1])<<endl;
t--;}

    return 0;
}