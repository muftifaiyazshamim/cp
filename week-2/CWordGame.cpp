#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int tu;cin>>tu;
    while (tu>0)
    {int t;cin>>t;         
  vector<string> v1, v2, v3;
    for (int i = 0; i < t; i++)
    {
        string x;cin>>x;v1.push_back(x);
    }
    for (int i = 0; i < t; i++)
    {
        string x;cin>>x;v2.push_back(x);
    }
    for (int i = 0; i < t; i++)
    {
        string x;cin>>x;v3.push_back(x);
    }int f1=0,f2=0,f3=0;
    for (int i = 0; i <t ; i++)
    {
    auto it1 = find(v2.begin(), v2.end(), v1[i]);
    auto it2 = find(v3.begin(), v3.end(), v1[i]);
    if(it1!=v2.end() && it2!=v3.end()) f1=f1+0;
    else if(it1==v2.end() && it2!=v3.end()||(it1!=v2.end() && it2==v3.end()))  f1=f1+1;   
    else f1=f1+3;
    }
     for (int i = 0; i <t ; i++)
    {
    auto it1 = find(v1.begin(), v1.end(), v2[i]);
    auto it2 = find(v3.begin(), v3.end(), v2[i]);
    if(it1!=v1.end() && it2!=v3.end()) f2=f2+0;
    else if(it1==v1.end() && it2!=v3.end()||(it1!=v1.end() && it2==v3.end()))  f2=f2+1;   
    else f2=f2+3;
    }
     for (int i = 0; i <t ; i++)
    {
    auto it1 = find(v1.begin(), v1.end(), v3[i]);
    auto it2 = find(v2.begin(), v2.end(), v3[i]);
    if(it1!=v1.end() && it2!=v2.end()) f3=f3+0;
    else if(it1==v1.end() && it2!=v2.end()||(it1!=v1.end() && it2==v2.end()))  f3=f3+1;   
    else f3=f3+3;
    }
    cout<<f1<<" "<<f2<<" "<<f3<<endl;
    tu--;}
    return 0;
}