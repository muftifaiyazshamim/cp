#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;
    while (t>0)
    {int a;cin>>a;
     vector<int> v;
     for (int i = 0; i < a; i++)
     {
        int x;cin>>x;v.push_back(x);
     }
     for (int i = 0; i <a; i++)
     {
        int al;string s;cin>>al>>s;
        // cin.ignore();
        
        for (int j = 0,k=a-1; j < al;k--, j++)
        {
            if (s[j]=='U') 
                {
                v[i]=v[i]-1;
                if(v[i]>9) v[i]=v[i]-10;  
                else if(v[i]<0) v[i]=v[i]+10;  
                }
            else{
                v[i]=v[i]+1;
                if(v[i]>9) v[i]=v[i]-10;
                else if(v[i]<0) v[i]=v[i]+10;
            }    
            
        }
        
     }
     for (int i = 0; i < a; i++)
     {
        cout<<v[i]<<" ";
     }
     
    cout<<endl;    
    
    t--;}
    

    return 0;
}