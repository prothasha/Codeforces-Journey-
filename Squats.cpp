#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    string s; cin>>s;
    vector<char>c1, c2;
    for(int i=0; i<n; i++) {
        if(s[i]=='x') c1.push_back(s[i]);
        else c2.push_back(s[i]);
    }
    int t=n/2;
    if(c1.size()==t && c2.size()==t) {
        cout<<0<<endl<<s;
    }
    else if(c1.size()>t) {
        int p=c1.size()-t;
        int x=p;
        for(int i=0; i<n && p>0; i++) {
            if(s[i]=='x') {
                s[i]='X';
                p--;
            }
        }
        cout<<x<<endl<<s;
    }
    else if(c2.size()>t) {
        int p=c2.size()-t;
        int x=p;
        for(int i=0; i<n && p>0; i++) {
            if(s[i]=='X') {
                s[i]='x';
                p--;
            }
        }
        cout<<x<<endl<<s;
    }
}
