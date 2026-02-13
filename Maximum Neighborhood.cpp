#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        if(n==1) {
            cout<<1<<endl;
            continue;
        }
        if(n==2) {
            cout<<9<<endl;
            continue;
        }
        if(n==3) {
            cout<<29<<endl;
            continue;
        }
        if(n==4) {
            cout<<56<<endl;
            continue;
        }
        if(n>4) {
            int p=(n*n)-n-1;
            int ans=p+(p+1)+(p-1)+(p-n)+(p+n);
            cout<<ans<<endl;
        }
    }
}
