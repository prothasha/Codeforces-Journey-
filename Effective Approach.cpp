#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n; cin>>n;
    vector<int>vec1(n);
    for(int i=0; i<n; i++) cin>>vec1[i];

    int m; cin>>m;
    vector<int>vec2(m);
    for(int i=0; i<m; i++) cin>>vec2[i];

    vector<int>nn(n+1);
    for(int i=0; i<n; i++) nn[vec1[i]]=i+1;

    long long V=0, P=0;
    for(int i=0; i<m; i++){
        int q=vec2[i];
        V+=nn[q];
        P+=(n-nn[q]+1);
    }
    cout<<V<<" "<<P;
}
int main(){
    p();
    code();
}
