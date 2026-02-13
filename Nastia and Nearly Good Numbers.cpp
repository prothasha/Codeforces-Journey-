#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t; cin>>t;
    while(t--) {
        long long a, b; cin>>a>>b;
        long long x=a;
        long long z=2*a*b;
        long long y=z-x;
        if(b>1) cout<<"YES"<<endl<<x<<" "<<y<<" "<<z<<endl;
        else cout<<"NO"<<endl;
    }
}

