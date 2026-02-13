#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int ans=4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            int x; cin>>x;
            if(x==1 && (i==1 || i==n || j==1 || j==m)) ans=2;
        }
    }
    cout<<ans<<endl;
}
