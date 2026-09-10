#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin>>t;while(t>0){
        string s,s2;cin>>s;
        vector<char> su;
        for (int i = 0; i < s.size(); i++)
        {
          

            if (s[i]=='b')
            {int f=0;
                for (int j = su.size()-1; j >=0; j--)
                {
                    if (su[j]>=97 && su[j]<=122)
                    {
                        su.erase(su.begin()+j);f=1;
                        break;
                    }
                
                }
                

            }
            else if(s[i]=='B'){
                int f=0;
                for  (int j = su.size()-1; j >=0; j--)
                {
                    if (su[j]>=65 && su[j]<=90)
                    {
                        su.erase(su.begin()+j);f=1;
                        break;
                    }
                
                }
              

            }
            else  su.push_back(s[i]);
            
        }
        for (int i = 0; i < su.size(); i++)
        {
            if(su[i]!='b' &&su[i]!='B')
            cout<<su[i];
        }
        cout<<endl;
        


    t--;}

    return 0;
}