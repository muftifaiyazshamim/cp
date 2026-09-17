#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;while (t>0)
    {
        int a,f=0;cin>>a;
        vector<int>v;
        for (int i = 0; i < a; i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        for (int i = 0,j=a-1; i < j;)
        {   int mn=1,mx=a;
            if((v[i]!=mn && v[j]!=mx)&&(v[j]!=mn && v[i]!=mx)) {
                cout<<i+1<<" "<<j+1<<endl;
                f=1;break;
            }
             else if(v[i]==mn || v[i]==mx){
                if(v[i]==mn) mn++; 
                else mx--;
                i++;
             }
             else  if(v[j]==mn || v[j]==mx){
                if(v[j]==mn) mn++; 
                else mx--;
                j--;
                }
        }
    if(f==0) cout<<-1<<endl;
        
    t--;}
    

    return 0;
}