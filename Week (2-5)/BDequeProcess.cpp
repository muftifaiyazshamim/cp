#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t--)
    {
        int a;cin>>a;
        deque<int>v;
        string ans="L";
        for (int i = 0; i < a; i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        int i=1,j=a-1,foyla=v[0];
        while (i<=j)
        {
            if (i==j) {ans=ans+"L";i++;}
            else{
                if (v[i]>foyla && v[j]>foyla)
                {
                    if (v[i]>v[j]) {ans=ans+"LR";foyla=v[j];}
                    else {ans=ans+"RL";foyla=v[i];}
                }
                else if (v[i]<foyla && v[j]<foyla)
                {
                    if(v[i]<v[j]) {ans=ans+"LR";foyla=v[j];}
                    else {ans=ans+"RL";foyla=v[i];}
                }
                else{
                    ans=ans+"LR";
                    foyla=v[j];
                }
                i++;j--;
                
            }
            
        }
        cout<<ans<<endl;
        
        
    }
    

    return 0;
}