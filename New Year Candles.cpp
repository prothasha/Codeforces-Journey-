#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b; cin>>a>>b;
    int ans=a;
    while(a>=b) {
        int c=a/b;
        ans+=c;
        a=(a%b)+c;
    }
    cout<<ans<<endl;
    return 0;
}
