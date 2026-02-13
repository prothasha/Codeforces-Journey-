#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, x; cin>>n>>x;
    vector<int>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    int t=0;

    for(int i=0; i<x; i++) {
        t+=vec[i];
    }
    int sum=t, ans=0, mins=t;
    for(int i=x; i<n; i++) {
        sum=sum-vec[i-x]+vec[i];
        if(sum<mins) {
            mins=sum;
            ans=i-x+1;
        }
    }
    cout<<ans+1<<endl;
    return 0;
}
