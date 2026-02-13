#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        long long n; cin>>n;
        long long a=sqrt(n);
        if (a*a==n) {
            bool p=true;
            if(a<2) p=false;
            else {
                if(a%2==0 && a!=2) p=false;
                else {
                    for(long long i=3; i*i<=a; i+=2) {
                        if(a%i==0) {
                            p=false;
                            break;
                        }
                    }
                }
            }
            if(p) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
