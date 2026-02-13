#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, q; cin>>n>>q;
        vector<int>vec1(n), vec2(n);
        for(int i=0; i<n; i++) cin>>vec1[i];
        for(int i=0; i<n; i++) cin>>vec2[i];
        vector<int>pp(n);
        for(int i=0; i<n; i++) pp[i]=max(vec1[i], vec2[i]);
        vector<int>mm(n);
        mm[n-1]=pp[n-1];
        for(int i=n-2; i>=0; i--) mm[i]=max(pp[i], mm[i+1]);
        vector<long long>p(n+1, 0);
        for(int i=0; i<n; i++) p[i+1]=p[i]+mm[i];
        for(int i=0; i<q; i++) {
            int l, r; cin>>l>>r;
            cout<<p[r]-p[l-1]<<" ";
        }
        cout<<endl;
    }
}
