#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n; cin>>n;
    vector<long long>vec1(n+1), vec2(n+1);
    for(long long i=1; i<=n; i++) cin>>vec1[i];
    vec2=vec1;
    sort(vec2.begin()+1, vec2.end());
    vector<long long>pref1(n+1, 0), pref2(n+1, 0);
    for(long long i=1; i<=n; i++) {
        pref1[i]=pref1[i-1]+vec1[i];
        pref2[i]=pref2[i-1]+vec2[i];
    }
    long long m; cin>>m;
    while(m--) {
        long long t, l, r; cin>>t>>l>>r;
        if(t==1) cout<<pref1[r]-pref1[l-1]<<endl;
        else cout<<pref2[r]-pref2[l-1]<<endl;
    }
}
int main(){
    p();
    code();
}
