#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        long long n, k; cin>>n>>k;
        vector<long long>vec(n);
        for(long long i=0; i<n; i++) cin>>vec[i];
        sort(vec.begin(), vec.end());
        long long T=0;
        for(long long i=0; i<n; i++) T+=vec[i];
        long long ans=0;
        vector<long long>pref(n+1, 0);
        for(long long i=0; i<n; i++) pref[i+1]=pref[i]+vec[i];
        for (long long i=0; i<=k; i++) {
            long long s= 2*i;
            long long b=k-i;
            if(s+b>n) continue;
            long long removed=pref[s]+(T -pref[n-b]);
            long long remain=T-removed;
            ans=max(ans, remain);
        }
        cout<<ans<<endl;
    }
}
