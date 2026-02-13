#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, t; cin>>s>>t;
    int n=s.size();

    vector<char>p(n);
    int c=0;
    for(int i=0; i<n; i++) {
        if(s[i]!=t[i]) c++;
    }
    if(c%2!=0) {
        cout<<"impossible"<<endl;
        return 0;
    }
    int tt=0;
    for(int i=0; i<n; i++) {
        if(s[i]==t[i]) p[i]=s[i];
        else {
            if(tt<c/2) {
                p[i]=s[i];
                tt++;
            }
            else p[i]=t[i];
        }
    }
    for(char i:p) cout<<i;
}
