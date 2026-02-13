#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    while(n--) {
        int t; cin>>t;
        int p, ans=INT_MAX;
        while(t>0) {
            p=t%10;
            t=t/10;
            ans=min(ans, p);
        }
        cout<<ans<<endl;
    }
    return 0;
}
