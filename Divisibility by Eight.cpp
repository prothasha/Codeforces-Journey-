#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    string s; cin>>s;
    for(int n=0; n<1000; n+=8) {
        string t=to_string(n);
        int i=0, j=0;
        while(i<s.size() && j<t.size()) {
            if(s[i]==t[j]) j++;
            i++;
        }
        if(j==t.size()) {
            cout<<"YES"<<endl<<t;
            return.;
        }
    }
    cout<<"NO";
}
int main(){
    p();
    code();
}
