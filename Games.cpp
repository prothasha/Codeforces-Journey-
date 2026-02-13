#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, c=0;
    cin>>n;
    vector<int> h;
    vector<int>g;
    for(int i=0; i<n; i++) {
        int x, y;
        cin>>x>>y;
        h.push_back(x);
        g.push_back(y);
    }
    for(int i=0; i<=h.size(); i++) {
        for(int j=0; j<=g.size(); j++) {
            if(h[i]==g[j]) c++;
        }
    }
    cout<<c;
}

