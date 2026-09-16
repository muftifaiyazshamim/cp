#include <bits/stdc++.h>
using namespace std;

int main() {
int t;cin>>t;while(t>0){
    int a,b,c=1,f=0;cin>>a>>b;
    int arr[a][2];
for (int i = 0; i < a; i++)
{
    for (int j = 0; j < 2; i++)
    {
        arr[i][j]=c;
        c++;
        if(c>a) f++;
    }
    
}
cout<<f*2<<endl;
    
    t--;
}

return 0;}
