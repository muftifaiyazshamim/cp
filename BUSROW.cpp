#include <bits/stdc++.h>
using namespace std;

int main() {
int t;cin>>t;
while(t>0){
int n,m,x;
cin>>n>>m>>x;
int arr[n][m];
int cf=0,cl=0;

int k=1;
for (int i = 0; i < n; i++)
{   
    for (int j = 0; j < m; j++)
    {   
        arr[i][j]=k++;
       if(arr[i][j]==x){cf=i+1;break;}
    }
    
}
cl=n-cf+1;
cout<<min(cf,cl)<<endl;

t--;}
return 0;}
