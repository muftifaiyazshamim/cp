#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t>0)
    {
        int a;cin>>a;
        vector<int>v;
        int o=0,e4=0,e=0;
        for (int i = 0; i < a; i++)
        {
            int x;cin>>x;v.push_back(x);
            if(x%2==1) o++;
            else{
                if(x%4==0) e4++;
                else e++;
            }
        }
        cout<<max(o,max(e,e4))<<endl;

        /* code */
    t--;}
    

    return 0;
}