#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n; cin>>n;
    string s; cin>>s;
    int p=1;
    for(int i=1; i<n; i++) {
        if(s[i]!=s[i-1]) p++;
    }
    bool ok=true;
    for(int i=1; i<n; i++) {
        if(s[i]!=s[0]) {
            ok=false;
            break;
        }
    }
    if(ok) cout<<1<<endl;
    else {
        if(s[0]!=s[n-1]) cout<<min(n, p+1)<<endl;
        else cout<<p<<endl;
    }
}
int main(){
    p();
    int t; cin>>t;
    while(t--) code();
}

