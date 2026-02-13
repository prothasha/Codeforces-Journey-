#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, k; cin>>n>>k;
        int sum=0, ans=0;
        vector<int>vec;
        for(int i=0; i<n; i++) {
            int x; cin>>x;
            vec.push_back(x);
        }
        for(int i=0; i<n; i++) {
            if(vec[i]>=k) sum+=vec[i];
            else if(vec[i]==0 && sum>0) {
                sum--; ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

