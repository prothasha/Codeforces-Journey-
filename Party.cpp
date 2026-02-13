#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>m(n);
    for(int i=0; i<n; i++) cin>>m[i];
    int ans=0;
    for(int i=0; i<n; i++){
        int d=1, x=i;
        while(m[x]!=-1) {
            x=m[x]-1;
            d++;
        }
        ans=max(ans,d);
    }
    cout<<ans<<endl;
    return 0;
}
