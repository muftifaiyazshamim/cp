#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    vector<int>au,bu;
    for (int i = 0; i < t; i++)
    {
        int a,b;
        cin>>a>>b;
        au.push_back(a);
        bu.push_back(b);
    }
    sort(au.begin(), au.end());
    sort(bu.begin(), bu.end());
    int cu=0,mx=0,u=0,i=0,j=0;
   while (i<t)
   {
    if (au[i]<bu[j]){
        cu++;i++;
        mx=max(mx,cu);
    }
    else {cu--;j++;}
    }

    cout<<mx<<endl;
    

    return 0;
}