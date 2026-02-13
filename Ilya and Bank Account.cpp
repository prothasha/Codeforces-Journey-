#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, p, q, o, ans;
    cin>>n;
    if(n>=0) cout<<n;
    else {
        p=n/10;
        q=n%10;
        o=(n/100)*10+q;
        ans=max(p, o);
        cout<<ans<<endl;
    }
}
