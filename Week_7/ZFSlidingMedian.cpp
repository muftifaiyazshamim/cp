#include <bits/stdc++.h>
using namespace std;

int main() {
    
  
    long long int n,k,su=0;
    cin >> n>>k;
    vector<long long int> v;
    for (long long int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        v.push_back(x);
    }
    multiset<long long int>tu(v.begin(),v.begin()+k);
    auto temp=next(tu.begin(),(k-1)/2);;
    for (long long int i = k; ; i++){
        std::cout << *temp << " ";
        if(i==n) break;
        tu.insert(v[i]);
        if(v[i]<*temp) temp--;
        if(v[i-k]<=*temp) temp++;
        tu.erase(tu.lower_bound(v[i-k]));
        
    }    
                   
       
        
 
    

    return 0;
}