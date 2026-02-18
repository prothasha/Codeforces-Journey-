#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    long long n; cin>>n;
    vector<pair<long long,int>>vec(n);
    for(int i=0; i<n; i++) {
        long long x; cin>>x;
        vec[i]={x, i+1};
    }
    sort(vec.rbegin(), vec.rend());
    vector<long long>ans(n+1);
    ans[0]=0;
    long long st=1, s=0;
    for(int i=0; i<n; i++) {
        int p=vec[i].second;
        long long f=vec[i].first;
        if(i%2==0) ans[p]=st;
        else {
            ans[p]=-st;
            st++;
        }
        s+=2*abs(ans[p])*f;
    }
    cout<<s<<endl;
    for(int i=0; i<=n; i++) cout<<ans[i]<<" ";
    cout<<endl;
}
int main(){
    p();
    int t; cin>>t;
    while(t--) code();
}
