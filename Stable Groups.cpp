#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    long long n, k, x; cin>>n>>k>>x;
    vector<long long>vec(n), g;
    for(int i=0; i<n; i++) cin>>vec[i];
    sort(vec.begin(), vec.end());
    for(int i=0; i<n-1; i++) {
        long long d=vec[i+1]-vec[i];
        if(d>x) {
            long long neew=(d-1)/x;
            g.push_back(neew);
        }
    }
    sort(g.begin(), g.end());
    long long ans=1;
    for(long long i:g) {
        if(k>=i) k=k-i;
        else ans++;
    }
    cout<<ans<<endl;
}
int main(){
    p();
    code();
}
