#include <bits/stdc++.h>
using namespace std;
int main() {
    int p, n, c=0;
    cin>>p>>n;
    vector<pair<int, int>>vec;
    for(int i=0; i<n; i++) {
        int d, p1;
        cin>>d>>p1;
        vec.push_back({d, p1});
    }
    sort(vec.begin(), vec.end());
    for(int i=0; i<n; i++) {
        if(vec[i].first<p) {
            c++;
            p+=vec[i].second;
        }
    }
    if(n==c) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

