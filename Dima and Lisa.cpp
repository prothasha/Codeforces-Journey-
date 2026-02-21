#include <bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
bool isPrime(long long x) {
    if(x<2) return false;
    if(x%2==0) return x==2;
    for(long long i=3; i*i<=x; i+=2) {
        if(x%i==0) return false;
    }
    return true;
}
void code(long long n) {
    if(isPrime(n)) cout<<1<<endl<<n;
    else if(isPrime(n-2)) cout<<2<<endl<<2<<" "<<n-2;
    else {
        cout<<3<<endl<<3<< " ";
        long long m=n-3;
        for(long long x=2; x<=m; x++) {
            if(isPrime(x) && isPrime(m-x)) {
                cout<<x<<" "<<(m-x);
                return;
            }
        }
    }
}
int main() {
    p();
    long long n; cin>>n;
    code(n);
}
