#include <bits/stdc++.h>
using namespace std;

int main() {
    int su=0;
    string s;cin>>s;
    for (int i = 0,j=1000; i < s.size();j=j/10, i++)
    {
        su=((int)s[i]+su)*j;
        cout<<su<<endl;
    
    }
    // su=su+1;
    // for (int i = 0; i <s.size()-1; i++)
    // {
    //     for (int j =i+j ; j < s.size(); j++)
    //     {
    //         if((int)s[i]==(int)s[j]) s[i]+1;
    //     }
        
    // }
    // cout<<s;


    return 0;
}