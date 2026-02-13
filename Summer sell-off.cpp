#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, f; cin>>n>>f;
    vector<long long>vec(n);
    long long t=0;
    for(int i=0; i<n; i++){
        long long k,l; cin>>k>>l;
        long long b=min(k,l);
        long long d=min(2*k,l);
        t+=b;
        vec.push_back(d-b);
    }
    sort(vec.rbegin(),vec.rend());
    for(int i=0; i<f; i++) t+=vec[i];
    cout<<t;
}
