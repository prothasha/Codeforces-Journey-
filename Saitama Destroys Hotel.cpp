#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, s; cin>>n>>s;
    vector<pair<int,int>> vec;
    for(int i=0; i<n; i++){
        int x, y; cin>>x>>y;
        vec.push_back({x, y});
    }
    sort(vec.begin(), vec.end(), greater<>());
    int c=s;
    int ans=0;
    for(int i=0; i<n; i++){
        int f=vec[i].first;
        int t=vec[i].second;
        ans+=(c-f);
        c=f;
        if(ans<t) ans=t;
    }
    ans+=c;
    cout<<ans;
}
