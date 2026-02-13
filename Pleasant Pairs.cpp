#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n; cin>>n;
    vector<int>vec(n+1);
    for(int i=1; i<=n; i++) cin>>vec[i];
    int s=0;
    for(int j=1; j<=n; j++) {
        for(int k=vec[j]; k<=2*n; k+=vec[j]) {
            int i=k-j;
            if(i>=1 && i<j && vec[i]*vec[j]==i+j) s++;
        }
    }
    cout<<s<<endl;
}
int main(){
    p();
    int t; cin>>t;
    while(t--) code();
}
