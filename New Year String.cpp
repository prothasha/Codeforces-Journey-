#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;
        bool ok1=false, ok2=false;
        for(int i=0; i+4<=s.size(); i++) {
            if(s.substr(i, 4)=="2025") ok1=true;
            if(s.substr(i, 4)=="2026") ok2=true;
        }
        if(ok2) cout<<0<<endl;
        else if(ok1) cout<<1<<endl;
        else cout<<0<<endl;
    }
}
