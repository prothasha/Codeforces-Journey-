#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k; cin>>n>>k;
    int p=2*n+1;
    vector<int>vec(p);
    for(int i=0; i<p; i++) cin>>vec[i];
    for(int i=0; i<p && k>0; i++) {
        if(i%2!=0) {
            int x=vec[i]-1;
            if(x>vec[i-1] && x>vec[i+1]) {
                vec[i]=x; k--;
            }
        }
    }
    for(int i:vec) cout<<i<<" ";
}

