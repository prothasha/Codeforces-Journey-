#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m; cin>>n>>m;
    vector<int>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    int mx=0, l=0;
    for(int i=0; i<n; i++) {
        int t=(vec[i]+m-1)/m;
        if(t>=mx) {
            mx=t;
            l=i+1;
        }
    }
    cout<<l<<endl;
}
