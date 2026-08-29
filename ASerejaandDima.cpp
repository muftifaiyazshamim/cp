#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a;
    cin>>a;vector<int>v;
    for (int i = 0; i < a; i++)
    {
        int x;cin>>x;v.push_back(x);
    }
    int s=0;
    int d=0;
    if(a%2==0){
    for (int i = 0,j=a-1; i < a/2;j--, i++)
    {
        int mx1=max(v[i],v[j]);
        s=s+mx1;
        if(mx1==v[j]) d=d+max(v[i],v[j-1]);
        else if(mx1==v[i]) d=d+max(v[i-1],v[j]);
    }
    }
    else{
    for (int i = 0,j=a-1; i < a/2-1;)
    {
        int mx1=max(v[i],v[j]);
        if(mx1==v[j]) {
            s=s+max(v[i],v[j]);
            
            d=d+max(v[i],v[j-1]);
            i++;
        }
        else if(mx1==v[i]) {
            s=s+max(v[i],v[j]);
            d=d+max(v[i-1],v[j]);
            j--;
            
        }
    }


    }
    cout<<s<<" "<<d;
    return 0;
}