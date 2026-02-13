#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    string s; cin>>s;
    map<string, int>m;
    for(int i=0; i<n-1; i++) {
        string p=s.substr(i, 2);
        m[p]++;
    }
    int mx=0; string ans;
    for(auto i:m) {
        if(i.second>mx) {
            mx=i.second;
            ans=i.first;
        }
    }
    cout<<ans<<endl;
}

