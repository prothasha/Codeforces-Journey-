#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        vector<int>vec(n);
        for(int i=0; i<n; i++) cin>>vec[i];
        if(vec[0]!=n) {
            cout<<"NO"<<endl;
            continue;
        }
        vector<int>freq(n, 0);
        for(int i=0; i<n; i++) if(vec[i]<=n) freq[vec[i]-1]++;
        for(int i=n-1; i>0; i--) freq[i-1]+=freq[i];
        bool p=true;
        for(int i=0; i<n; i++) {
            if(vec[i]!=freq[i]) {
                p=false;
                break;
            }
        }
        if(p) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
