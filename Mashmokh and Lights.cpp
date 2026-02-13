#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    vector<int>vec(m),ans(n+1,0);
    for(int i=0; i<m; i++) cin>>vec[i];
    vector<bool>used(n+1,false);
    for(int i=0; i<m; i++){
        for(int j=vec[i]; j<=n; j++){
            if(!used[j]){
                ans[j]=vec[i];
                used[j]=true;
            }
        }
    }
    for(int i=1; i<=n; i++) cout<<ans[i]<<" ";
}
