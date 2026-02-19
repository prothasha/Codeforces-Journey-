#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    long long n, t; cin>>n>>t;
    vector<long long>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    long long s=0, c=0, p=0, ans=0;
    for(int i=0; i<n; i++) {
        s+=vec[i];
        c++;
        while(s>t) {
            s=s-vec[p];
            p++;
            c--;
        }
        ans=max(ans, c);
    }
    cout<<ans;
}
int main(){
    p();
    code();
}
