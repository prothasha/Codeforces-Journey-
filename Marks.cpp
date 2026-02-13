#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin>>n>>m;
    vector<string>vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    set<int>s;
    for(int j=0; j<m; j++){
        int mx=0;
        for(int i=0; i<n; i++) {
            int p=vec[i][j]-'0';
            mx=max(mx, p);
        }
        for(int i=0; i<n; i++) if(vec[i][j]-'0'==mx) s.insert(i);
    }
    cout<<s.size()<<endl;
}
