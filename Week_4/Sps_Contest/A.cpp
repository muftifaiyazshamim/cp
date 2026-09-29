#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t--)
    {
        int a;cin>>a;
        vector<int>v;
        int su=0;
        for (int i = 0; i < a; i++)
        {
            int x;cin>>x;v.push_back(x);
            su=su+(x-1);
        }
        cout<<su<<endl;
    }
    

    return 0;
}