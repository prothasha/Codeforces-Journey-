#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m; cin>>n>>m;
    map<string, string>s;
    for(int i=0; i<m; i++) {
        string x, y; cin>>x>>y;
        s[x]=y;
    }
    for(int i=0; i<n; i++) {
        string w; cin>>w;
        if(s[w].size()<w.size()) cout<<s[w]<<" ";
        else cout<<w<<" ";
    }
}

