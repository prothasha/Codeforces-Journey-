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
    int d=INT_MAX, i1=-1;
    for(int i=0; i<n-1; i++) {
        if((vec[i+1]-vec[i])<d) {
            d=vec[i+1]-vec[i];
            i1=i;
        }
    }
    cout<<vec[i1]<<" ";
    for(int i=i1+2; i<n; i++) cout<<vec[i]<<" ";
    for(int i=0; i<i1; i++) cout<<vec[i]<<" ";
    cout<<vec[i1+1]<<endl;
}
int main(){
    p();
    int t; cin>>t;
    while(t--) code();
}
