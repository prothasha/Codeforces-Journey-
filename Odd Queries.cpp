#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, q; cin>>n>>q;
        vector<int>vec(n);
        for(int i=0; i<n; i++) cin>>vec[i];
        int sum, ts=0, ps=0;
        for(int i=0; i<n; i++) ts+=vec[i];
        vector<int>pre(n+1, 0);
        for(int i=0; i<n; i++) pre[i+1]=pre[i]+vec[i];

        for(int i=0; i<q; i++) {
            int l, r, k; cin>>l>>r>>k;
            int ps=pre[r]-pre[l-1];
            int ns=(r-l+1)*k;
            sum=ts-ps+ns;
            if(sum%2==0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}

