#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t; cin>>t;
    while(t--) {
        long long n, k; cin>>n>>k;
        long long p=(n+k-1)/k;  //ceil(n/k)
        long long q=p*k;
        long long ans=(q+n-1)/n; //ceil(k/n)
        cout<<ans<<endl;
    }
    return 0;
}

