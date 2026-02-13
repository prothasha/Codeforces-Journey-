#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        long long n, m, h; cin>>n>>m>>h;
        vector<long long>vec(n+1);
        for(int i=1; i<=n; i++) cin>>vec[i];
        vector<long long> vec2(n+1, 0);
        vector<int>vec3(n+1, 0);
        int co=0;
        for(int i=0; i<m; i++) {
            long long b, c; cin>>b>>c;
            if(vec3[b]!=co) {
                vec2[b]=0;
                vec3[b]=co;
            }
            long long v=vec[b]+vec2[b]+c;
            if(v>h) co++;
            else vec2[b]+=c;
        }
        for(int i=1; i<=n; i++) {
            if(vec3[i]!=co) vec2[i]=0;
            cout<<vec[i]+vec2[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
