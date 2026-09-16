#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;while (t>0)
    {
        int a;cin>>a;vector<int>v;
        for (int i = 0,j=a-1; i < a;j--, i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        for (int i = 0,j=a-1; i < a;)
        {
            if(v[i]!=1 && v[j]!=a) {cout<<i+1<<" "<<j+1<<endl;break;}
             else {
                i++;j--;
             }
        }
        
    t--;}
    

    return 0;
}