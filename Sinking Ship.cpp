#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    vector<string>r, w_b, c, m;
    for(int i=0; i<n; i++) {
        string a, b; cin>>a>>b;
        if(b=="captain") c.push_back(a);
        if(b=="man") m.push_back(a);
        if(b=="rat") r.push_back(a);
        if(b=="child" || b=="woman") w_b.push_back(a);
    }
    for(string i:r) cout<<i<<endl;
    for(string i:w_b) cout<<i<<endl;
    for(string i:m) cout<<i<<endl;
    for(string i:c) cout<<i<<endl;
}

