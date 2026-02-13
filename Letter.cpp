#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    string s1, s2; getline(cin, s1); getline(cin, s2);
    map<char,int>f;
    for(char c : s1) {
        if(c!=' ') f[c]++;
    }
    for(char c : s2) {
        if(c==' ') continue;
        if(f[c]==0) {
            cout<<"NO"<<endl;
            return;
        }
        f[c]--;
    }
    cout<<"YES"<<endl;
}
int main(){
    p();
    code();
}
