#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int ans=0;
    while(n>0) {
        int p=n%2;
        if(p==1) ans++;
        n=n/2;
    }
    cout<<ans<<endl;
    return 0;
}
