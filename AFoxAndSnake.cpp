#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a,b;cin>>a>>b;
    int zu=0;
    for (int i = 0; i < a; i++)
{   
    if(i%2==0){
        for (int j = 0; j < b; j++)
        {
             cout<<"#";
        }
        cout<<endl;
    }
    else{
        if(zu==0){
            for (int j = 0; j < b; j++)
            {
            if(j!=b-1) cout<<".";
            else cout<<"#";
                
            }
            zu=1;
        }
        else{
            for (int j = 0; j < b; j++){
            
                if(j==0) cout<<"#";
                else cout<<".";
            }
            zu=0;
        }
        cout<<endl;
    }
}

    

    return 0;
}