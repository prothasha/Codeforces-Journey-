#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int t; cin>>t;
    while(t--) {
        long long n, w;
        cin>>n>>w;
        cout<<n-(n/w)<<endl;
    }
}
int main(){
    p();
    code();
}
