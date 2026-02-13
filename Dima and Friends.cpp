#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    vector<int>vec(n);
    int s=0;
    for(int i=0; i<n; i++) {
        cin>>vec[i];
        s+=vec[i];
    }
    int co=0;
    for(int i=1; i<=5; i++) if((s+i)%(n+1)!=1) co++;
    cout<<co;
}
