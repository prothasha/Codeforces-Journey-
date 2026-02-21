#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n; cin>>n;
    vector<int>vec;
    if(n%2==0) {
        for(int i=0; i<n; i+=2) vec.push_back(2);
    }
    else {
        int m=n-3;
        for(int i=0; i<m; i+=2) vec.push_back(2);
        vec.push_back(3);
    }
    cout<<vec.size()<<endl;
    for(int i: vec) cout<<i<<" ";
}
int main(){
    p();
    code();
}
