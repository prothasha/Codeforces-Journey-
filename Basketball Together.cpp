#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n, d; cin>>n>>d;
    vector<int>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    sort(vec.begin(), vec.end(), greater<int>());
    int s=0, t=0;
    for(int i=0; i<n; i++) {
        t+=(d/vec[i])+1;
        if(t<=n) s++;
        else break;
    }
    cout<<s;
}
int main(){
    p();
    code();
}
