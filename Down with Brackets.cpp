#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string s; cin>>s;
        int c=0;
        bool p=false;
        for(int i=1; i+1<(int)s.size(); i++) {
            if(s[i]=='(') c++;
            else c--;
            if(c<0) {
                cout<<"YES"<<endl;
                p=true;
                break;
            }
        }
        if(!p) {
            if(c==0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}
