#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        long long a, b; cin>>a>>b;
        if(a>=b*b && (a%2==0 && b%2==0)) cout<<"YES"<<endl;
        else if(a>=b*b && (a%2!=0 && b%2!=0)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

