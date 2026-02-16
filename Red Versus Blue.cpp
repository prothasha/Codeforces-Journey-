#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n, r, b; cin>>n>>r>>b;
    vector<char>vec;
    int nn=r/(b+1);
    int ex=r%(b+1);
    for(int i=0; i<b+1; i++) {
        for(int j=0; j<nn; j++) vec.push_back('R');
        if(ex>0) {
            vec.push_back('R');
            ex--;
        }
        if(i<b) vec.push_back('B');
    }
    for(char i:vec) cout<<i;
    cout<<endl;
}
int main(){
    p();
    int t; cin>>t;
    while(t--) code();
}
