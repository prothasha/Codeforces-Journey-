#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n, x; cin>>n>>x;
    vector<int>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    int l=vec[0]-x, r=vec[0]+x;
    int c=0;
    for(int i=1; i<n; i++) {
        int Nl=vec[i]-x, Nr=vec[i]+x;
        l=max(l, Nl);
        r=min(r, Nr);
        if(l>r) {
            l=Nl;
            r=Nr;
            c++;
        }
    }
    cout<<c<<endl;
}
int main(){
    p();
    int t; cin>>t;
    while(t--) code();
}
