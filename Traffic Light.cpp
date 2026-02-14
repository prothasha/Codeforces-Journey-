#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n; char c;
    cin>>n>>c;
    string s; cin>>s;
    vector<int>G;
    for(int i=0; i<n; i++) if(s[i]=='g') G.push_back(i);
    int ans=0;
    for(int i=0; i<n; i++) {
        if(s[i]==c) {
            auto it=lower_bound(G.begin(), G.end(), i);
            int d;
            if(it!=G.end()) d=*it-i;
            else d=(n-i)+G[0];
            ans=max(ans, d);
        }
    }
    cout<<ans<<endl;
}
int main(){
    p();
    int t; cin>>t;
    while(t--) code();
}
