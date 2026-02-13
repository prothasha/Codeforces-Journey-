#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t; cin>>t;
    while(t--) {
        long long x, y; cin>>x>>y;
        long long a, b; cin>>a>>b;
        long long ans;
        long long m=min(x, y);
        long long n=abs(x-y);
        ans=m*min(b, 2*a)+n*a;
        cout<<ans<<endl;
    }
}

