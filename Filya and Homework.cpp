#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n; cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(),vec.end()),vec.end());
    if(vec.size()<=2) cout<<"YES";
    else if(vec.size()==3 && vec[1]-vec[0]==vec[2]-vec[1]) cout<<"YES";
    else cout<<"NO";
}
int main(){
    p();
    code();
}
