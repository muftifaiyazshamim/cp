#include <bits/stdc++.h>
using namespace std;

    int maxSubarraySum(vector<int>& arr, int k) {
        int mx=0;
        for (int i = 0,j=k-1; i < arr.size(); i++)
        {
            int temp=i;
            int temp2=j;
            int sum=0;
            while(temp!=temp2){
                sum=sum+arr[temp];
                temp++;
            }
            mx=max(mx,sum);
            
        }
        return mx;
    }

int main(){
    vector<int>v;
    int t=2;
    for (int i = 0; i < 5; i++)
    {
        int c;cin>>c;v.push_back(c);
    }
    cout<<maxSubarraySum(v,t);
 
 
    return 0;
}