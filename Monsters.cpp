#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--) {
        int n, k; cin>>n>>k;
        vector<int>vec(n);
        vector<pair<int, int>>ans;
        for(int i=0; i<n; i++) cin>>vec[i];
        for(int i=0; i<n; i++) {
            int p=vec[i]%k;
            if(p==0) p=k;
            ans.push_back({p, i});
        }
        sort(ans.begin(),ans.end(),[](auto &x,auto &y){
            if(x.first!=y.first) return x.first>y.first;
            return x.second<y.second;
        });
        for(auto &i:ans) cout<<i.second+1<<" ";
        cout<<endl;
    }
}
