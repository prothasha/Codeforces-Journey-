#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n; cin>>n;
    string s; cin>>s;
    int z=0, o=0;
    for(int i=0; i<n; i++) {
        if(s[i]=='0') z++;
        else o++;
    }
    if(z==n) {
        cout<<0<<endl;
        return;
    }
    if(z==1) {
        cout<<1<<endl;
        for(int i=0; i<n; i++) {
            if(s[i]=='0') {
                cout<<i+1<<endl;
                break;
            }
        }
        return;
    }
    if(o%2==0){
        cout<<o<<endl;
        bool ok=true;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                if(!ok) cout<<" ";
                cout<<i+1;
                ok=false;
            }
        }
        cout<<endl;
    }
    else if(z%2==1){
        cout<<z<<endl;
        bool ok=true;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                if(!ok) cout<<" ";
                cout<<i+1;
                ok=false;
            }
        }
        cout<<endl;
    }
    else cout<<-1<<endl;
}
int main(){
    p();
    int t; cin>>t;
    while(t--) code();
}
