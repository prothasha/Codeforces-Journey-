#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        long long a, b; cin>>a>>b;
        long long xk, yk, xq, yq; cin>>xk>>yk>>xq>>yq;
        long long arr1[8]={ a,  a, -a, -a,  b,  b, -b, -b };
        long long arr2[8]={ b, -b,  b, -b,  a, -a,  a, -a };
        set<pair<long long, long long>> K, Q;
        for(int i=0; i<8; i++) {
            K.insert({xk+arr1[i], yk+arr2[i]});
            Q.insert({xq+arr1[i], yq+arr2[i]});
        }
        int ans=0;
        for(auto i : K) {
            if(Q.find(i)!=Q.end()) {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
