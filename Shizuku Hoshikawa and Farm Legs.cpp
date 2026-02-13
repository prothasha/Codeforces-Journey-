#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int c;
        if(n%2!=0) cout<<0<<endl;
        else {
            c=(n/4)+1;
            cout<<c<<endl;
        }
    }
}
