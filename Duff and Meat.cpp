#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    long long co=0, b=LLONG_MAX;
    for(int i=0; i<n; i++) {
        long long a, p;
        cin>>a>>p;
        b=min(b, p);
        co+=a*b;
    }
    cout<<co<<endl;
}
