#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;

    vector<int>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];

    int x, y; cin>>x>>y;

    int t=0;
    for(int i=0; i<n; i++) t+=vec[i];

    int sum=0;
    for(int i=0; i<n; i++) {
        int p=sum;
        int q=t-p;
        if(p>=x && p<=y && q>=x && q<=y) {
            cout<<i+1<<endl;
            return 0;
        }
        sum+=vec[i];
    }
    cout<<0<<endl;
}
