#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n; cin>>n;
    string s; cin>>s;
    int c=0;
    for(int i=0; i<n; i++) {
        if(s[i]=='0') c++;
    }
    if(c==0) cout<<"DRAW"<<endl;
    else if(c%2==0 || c==1) cout<<"BOB"<<endl;
    else cout<<"ALICE"<<endl;
}
int main(){
    p();
    int t; cin>>t;
    while(t--) code();
}
