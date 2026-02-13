#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<long long>vec(n);
        for(int i=0; i<n; i++) cin>>vec[i];
        long long ans=0;
        for (int i=1; i<=60; i++) {
            long long k=1LL<<i;
            set<long long>s;
            for (int j=0; j<n; j++) {
                s.insert(vec[j]%k);
            }
            if (s.size()==2) {
                ans=k;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
