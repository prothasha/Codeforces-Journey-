#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin>>s;
    long long mid=-1;
    for(long long i=0; i<s.size(); i++) {
        if(s[i]=='^') {
            mid=i; break;
        }
    }
    long long l=0, r=0;
    for(long long i=0; i<mid; i++) {
        if(isdigit(s[i])) {
            long long w=s[i]-'0';
            l+=(mid-i)*w;
        }
    }
    for(long long i=mid+1; i<s.size(); i++) {
        if(isdigit(s[i])) {
            long long w=s[i]-'0';
            r+=(i-mid)*w;
        }
    }
    if(l==r) cout<<"balance";
    else if(l<r) cout<<"right";
    else cout<<"left";
}

