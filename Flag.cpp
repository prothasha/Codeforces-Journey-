#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m; cin>>n>>m;
    vector<string>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    bool ok=true;
    for(int i=0; i<n; i++) {
        for(int j=1; j<m; j++) {
            if(vec[i][j]!=vec[i][0]) {
                ok=false;
                break;
            }
        }
        if(!ok) break;
        if(i>0 && vec[i][0]==vec[i-1][0]) {
            ok=false;
            break;
        }
    }
    if(ok) cout<<"YES"<<endl;
    else cout <<"NO"<<endl;
}
