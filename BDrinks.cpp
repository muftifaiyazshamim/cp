#include <bits/stdc++.h>
using namespace std;

int main() {
    double a,sum=0;cin>>a;
    for (int i = 0; i < a; i++)
    {
        double x;cin>>x;
        sum=sum+x;
    }
    cout<<sum/a;

    return 0;
}