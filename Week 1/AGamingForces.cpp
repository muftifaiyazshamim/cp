#include <bits/stdc++.h>
using namespace std;
//vbal osiena
int main() {
    int t;cin>>t;
    while(t>0){
    int a;cin>>a;
    vector <int> v;
    for (int i = 0; i <a; i++)
    {
        int x;cin>>x;v.push_back(x);
    }
    int c=0;
    sort(v.begin(),v.end());
 for (int i = 0; i < a ; )
 {
    if(v[i]>=1 &&v[i+1]>=1) {
        v[i]--;v[i+1]--;
        if (v[i]==0 || v[i+1]==0) i++;
    }
    else if(v[i]>=0 &&v[i+1]>=1) i++;
    else if(v[i]>=1 &&v[i+1]>=0){  v[i]--; if(v[i]==0) i++;}  
 }
 cout<<c<<endl;

    }
    return 0;
}