#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a,al;
    cin>>a;
    
    while(a>0){
        int l;
        cin>>l;
       
        vector<int> v;
        for (int i = 0; i < l*2; i++)
        {
            int c;cin>>c;
            v.push_back(c);


        }
        int sum=0;
        for (int i = 0,j=(l*2)-1; i < l;j--, i++)
        {
            v[i]=max(v[i],v[j]);
            sum=sum+v[i];
        }
        cout<<sum<<endl;
        


        a--;
    }

    return 0;
}