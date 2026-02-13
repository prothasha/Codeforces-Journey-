#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, x;
    cin>>n>>x;
    long long o=(n+1)/2;
    if (x<=o) cout<<2*x-1<<endl;
    else cout<<2*(x-o)<<endl;
    return 0;
}
