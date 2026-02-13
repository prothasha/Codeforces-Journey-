#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin>>n;
    string s; cin>>s;
    vector<long long>vec(n);
    for(long long i=0; i<n; i++) cin>>vec[i];
    long long ans=LLONG_MAX;
    for(long long i=0; i<n-1; i++) {
        if(s[i]=='R' && s[i+1]=='L') {
            long long t=(vec[i+1]-vec[i])/2;
            ans=min(ans, t);
        }
    }
    if(ans!=LLONG_MAX) cout<<ans;
    else cout<<-1;
}
