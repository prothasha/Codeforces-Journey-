#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;
        set<char>s1;
        long long ans=0;
        for(int i=0; i<n; i++) {
            if(s1.find(s[i])==s1.end()) {
                s1.insert(s[i]);
                ans+=(n-i);
            }
        }
        cout<<ans<<endl;
    }
}
