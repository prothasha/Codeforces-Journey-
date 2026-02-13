#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int sum=0;
        bool f=false;
        for(int i=0; i<=n/2020; i++) {
            for(int j=0; j<=n/2021; j++) {
                sum=2020*i+2021*j;
                if(sum==n) {
                    f=true;
                    break;
                }
            }
            if(f) break;
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
