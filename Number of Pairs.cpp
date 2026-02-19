#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    long long n, l, r; cin>>n>>l>>r;
    vector<long long>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    sort(vec.begin(), vec.end());
    long long c=0;
    for(int i=0; i<n; i++) {
        long long ll=l-vec[i];
        long long rr=r-vec[i];
        long long l1=lower_bound(vec.begin()+i+1, vec.end(), ll)-vec.begin();
        long long r1=upper_bound(vec.begin()+i+1, vec.end(), rr)-vec.begin();
        c=c+r1-l1;
    }
    cout<<c<<endl;
}
int main(){
    p();
    int t; cin>>t;
    while(t--) code();
}
