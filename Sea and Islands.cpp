#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n, k; cin>>n>>k;
    int mi=(n*n+1)/2;
    if(k>mi) {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    vector<string>vec(n);
    for(int i=0; i<n; i++) {
        vec[i]=string(n, 'S');
    }
    int t=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if((i+j)%2==0 && t<k) {
                vec[i][j]='L';
                t++;
            }
        }
    }
    for(int i=0; i<n; i++) cout<<vec[i]<<endl;
}
int main(){
    p();
    code();
}
