#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m; cin>>n>>m;
    if(m%n!=0) {
        cout<<-1;
        return 0;
    }
    long long p=m/n;
    int s=0;

    while(p%2==0) {
        p/=2;
        s++;
    }
    while(p%3==0) {
        p/=3;
        s++;
    }
    if(p!=1) cout<<-1;
    else cout<<s;
}
