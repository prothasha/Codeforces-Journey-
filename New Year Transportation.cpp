#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    cin>>n>>x;
    int m=n-1;
    vector<int>vec;
    while(m--) {
        int a;
        cin>>a;
        vec.push_back(a);
    }
    int ans=1;
    while(ans<x) ans+=vec[ans-1];

    if(ans==x) cout<<"YES";
    else cout<<"NO";

    return 0;
}
