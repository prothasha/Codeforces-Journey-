#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n>>m;
        string s, w;
        cin>>s>>w;
        int co=0;
        while(s.find(w) == string::npos) {
            s+=s;
            co++;
            if(co>10) {
                co=-1;
                break;
            }
        }
        cout<<co<<endl;
    }
    return 0;
}
