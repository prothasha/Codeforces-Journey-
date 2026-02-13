#include<bits/stdc++.h>
using namespace std;

void p() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void code() {
    int n, k;
    cin>>n>>k;
    int ans=0;
    for(int i=0; i<n; i++) {
        string s; cin>>s;
        long long num=stoll(s);
        vector<bool>t(10, false);
        long long x=num;
        while(x>0) {
            int d=x%10;
            t[d]=true;
            x/=10;
        }
        bool ok=true;
        for (int i=0; i<=k; i++) {
            if (!t[i]) {
                ok=false;
                break;
            }
        }
        if(ok) ans++;
    }
    cout<<ans<<endl;
}
int main() {
    p();
    code();
}
