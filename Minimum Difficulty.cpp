#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    int ans=INT_MAX;
    for(int i=1; i<n-1; i++) {
        int max1=0;
        for(int j=1; j<n; j++) {
            if(j==i) continue;
            if(j-1==i) max1=max(max1, abs(vec[j]-vec[j-2]));
            else max1=max(max1, abs(vec[j]-vec[j-1]));
        }
        ans=min(ans, max1);
    }
    cout<<ans<<endl;
}
