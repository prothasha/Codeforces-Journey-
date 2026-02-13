#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin>>n>>k;
    int m=240-k;
    int t=0, c=0;

    for (int i=1; i<=n; i++) {
        t+=5*i;
        if (t<=m) c++;
        else break;
    }

    cout<<c<<endl;
    return 0;
}
