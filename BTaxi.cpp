#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a;cin>>a;
    vector<int>v;
    for (int i = 0; i < a; i++)
    {
        int x;cin>>x;v.push_back(x);
    }
    int cu=0;
    for (int i = 0; i < a; i++)
    {
        int temp=4-v[i];
        auto fu=find(v.begin(),v.end(),temp);
        if(fu!=v.end()) {v.erase(fu);i++;cu++;}
        else cu++;
    }
    cout<<cu<<endl; 
    

    return 0;
}