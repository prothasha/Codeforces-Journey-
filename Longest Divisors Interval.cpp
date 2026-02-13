#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int t; cin>>t;
    while(t--) {
        long long n; cin>>n;
        long long ans=1;
        for(long long i=2; i<=n; i++) {
            if(n%i==0) ans++;
            else break;
        }
        cout<<ans<<endl;
    }
}
int main(){
    p();
    code();
}
