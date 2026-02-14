#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n, m; cin>>n>>m;
    vector<string>A(n);
    for(int i=0; i<n; i++) cin>>A[i];
    vector<int>M(m);
    for(int j=0; j<m; j++) cin>>M[j];
    long long t=0;
    for(int j=0; j<m; j++) {
        vector<int>f(5, 0);
        for(int i=0; i<n; i++) {
            int ind=A[i][j]-'A';
            f[ind]++;
        }
        long long b=0;
        for(int k=0; k<5; k++) {
            if(f[k]>b) {
                b=f[k];
            }
        }
        t+=b*M[j];
    }
    cout<<t<<endl;
}
int main(){
    p();
    code();
}
