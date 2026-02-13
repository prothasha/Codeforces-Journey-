#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m; cin>>n>>m;
    vector<int>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    vector<int>q(m);
    for(int i=0; i<m; i++) cin>>q[i];

    vector<int>ans(n);
    set<int>s;
    for(int i=n-1; i>=0; i--) {
        s.insert(vec[i]);
        ans[i]=s.size();
    }

    for(int i=0; i<m; i++) {
        cout<<ans[q[i]-1]<<endl;
    }
}
