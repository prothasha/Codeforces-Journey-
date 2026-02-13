#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int>vec(n);
        for(int i=0; i<n; i++) cin>>vec[i];
        vector<int>a(n);
        for(int i=0; i<n; i++) a[i]=abs(vec[i]-(i+1));
        int ans=0;
        for(int i=0; i<n; i++) ans=gcd(ans, a[i]);
        cout<<ans<<endl;
    }
}
int main(){
    p();
    code();
}
