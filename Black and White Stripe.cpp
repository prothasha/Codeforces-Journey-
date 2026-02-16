#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n, k; cin>>n>>k;
    string s; cin>>s;
    int W=0;
    for(int i=0; i<k; i++) {
        if(s[i]=='W') W++;
    }
    int ans=W;
    for(int i=k; i<n; i++) {
        if(s[i-k]=='W') W--;
        if(s[i]=='W') W++;
        if(W<ans) ans=W;
    }
    cout<<ans<<endl;
}
int main(){
    p();
    int t; cin>>t;
    while(t--) code();
}

