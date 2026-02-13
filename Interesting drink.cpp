#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    vector<int>vec, vec2;
    for(int i=0; i<t; i++) {
        int x; cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end());
    int n; cin>>n;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        vec2.push_back(x);
    }
    int co=0;
    for(int i=0; i<n; i++) {
        int b=vec2[i];
        int co=upper_bound(vec.begin(), vec.end(), b)-vec.begin();
        cout<<co<<endl;
    }
    return 0;
}
