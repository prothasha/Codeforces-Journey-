#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m, x, y;
        cin>>n>>m>>x>>y;
        vector<int>vec1(n);
        vector<int>vec2(m);
        for(int i=0; i<n; i++) {
            cin>>vec1[i];
        }
        for(int i=0; i<m; i++) {
            cin>>vec2[i];
        }
        int ho=0, ve=0;
        for(int i=0; i<vec1.size(); i++) {
            if(vec1[i]>0 && vec1[i]<y) ho++;
        }
        for(int i=0; i<vec2.size(); i++) {
            if(vec2[i]>0 && vec2[i]<x) ve++;
        }
        int p=ho+ve;
        cout<<p<<endl;
    }
}
