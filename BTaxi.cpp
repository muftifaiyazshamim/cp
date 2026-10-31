#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a;cin>>a;
    int cu=0,cu1=0,cu2=0,cu3=0,cu4=0;

    vector<int>v;
    for (int i = 0; i < a; i++)
    {
        int x;cin>>x;v.push_back(x);
        if (x==1)cu1++;
        else if(x==2)cu2++;
        else if(x==3)cu3++;
        else cu4++;
    }
    cu=cu4;
    int baki_1=cu1-cu3;
    if(baki_1<0) baki_1=0;
    cu=cu+cu3; 
    cu=cu+cu2/2;
    if(cu2%2==1){
        cu++;
        baki_1=baki_1-2;
        if(baki_1<0) baki_1=0;
    }
    cu=cu+(baki_1+3)/4;
    cout<<cu;

    return 0;
}