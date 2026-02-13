#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n, k; cin>>n>>k;
    vector<int>vec(n), new1;
    for(int i=0; i<n; i++) cin>>vec[i];
    new1=vec;
    sort(new1.begin(), new1.end());
    map<int,int>m;
    for(int i=0; i<n; i++) m[new1[i]]=i;
    int s=1;
    for(int i=1; i<n; i++) {
        if(m[vec[i]]!=m[vec[i-1]]+1) s++;
    }
    if(s<=k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    p();
    int t; cin>>t;
    while(t--) code();
}
