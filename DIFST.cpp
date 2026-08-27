#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t>0)
    {int p,c=0;cin>>p;
        string s,s1;
     vector<int>v;
     for (int i = 0; i < p; i++)
     {
        int x;cin>>x;v.push_back(x);s.push_back(x);
     }
     s1=s;
     sort(s1.begin(),s1.end());
     for (int i = 0,j=i+1; i < p-1; i++,j++)
    {
     if(abs(v[i]-v[j]+1)>=abs(i-j+1)){c++;}
    }
    cout<<c<<endl;
     for (int i = 0,j=i+1; ; i++,j++)
     {
        if(abs(v[i]-v[j])>=abs(i-j)){ swap(v[i],v[j]); cout<<v[i]<<" "<<v[j]<<endl;swap(s[i],s[j]);}
        if(i==p-2) {i=0;}
        if (s==s1) break;
            

     }
        
        
    t--;}
    

    return 0;
}