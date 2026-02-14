#include<bits/stdc++.h>
using namespace std;
long long n, k;
vector<long long>vec;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
bool f(long long x) {
    long long s=0;
    for(long long i=n/2; i<n; i++) {
        if(vec[i]<x) s+=x-vec[i];
    }
    return s<=k;
}
void code(){
    cin>>n>>k;
    vec.resize(n);
    for(long long i=0; i<n; i++) cin>>vec[i];
    sort(vec.begin(), vec.end());
    long long l=1, r=2e9, ans=0;
    while(l<=r) {
        long long mid=l+(r-l)/2;
        if(f(mid)) {
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans;
}
int main(){
    p();
    code();
}
