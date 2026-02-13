#include<bits/stdc++.h>
using namespace std;
int main() {
    int k, n, w;
    cin>>k>>n>>w;
    int s=0;
    for(int i=1; i<=w; i++) {
        int c=i*k;
        s=s+c;
    }
    int p=s-n;
    if(p>0) {
        cout<<p<<endl;
    }
    else {
        cout<<0<<endl;
    }
    return 0;
}
