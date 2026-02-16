#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    long long n; cin>>n;
    long long a=1, b=n-1;
    //long long lcm=LONG_MAX;
    for(int i=2; i*i<=n; i++) {
        if(n%i==0) {
            a=n/i;
            b=n-a;
            break;
        }
    }
    cout<<a<<" "<<b<<endl;
}
int main(){
    p();
    int t; cin>>t;
    while(t--) code();
}
