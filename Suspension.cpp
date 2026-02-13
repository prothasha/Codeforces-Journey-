#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int p, q; cin>>p>>q;
        int m=q;
        m+=p/2;
        if(m<n) cout<<m<<endl;
        else cout<<n<<endl;
    }
}

