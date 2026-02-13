#include<bits/stdc++.h>
using namespace std;
int main() {
    long long a, b, c, d; cin>>a>>b>>c>>d;
    long double x=b*log((long double)a);
    long double y=d*log((long double)c);
    if(x>y) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
