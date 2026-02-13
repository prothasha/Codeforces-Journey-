#include <bits/stdc++.h>
using namespace std;
int main(){
    string x,y; cin>>x>>y;
    int h1=stoi(x.substr(0,2));
    int m1=stoi(x.substr(3,2));
    int h2=stoi(y.substr(0,2));
    int m2=stoi(y.substr(3,2));
    int t1=h1*60+m1;
    int t2=h2*60+m2;
    int d=t1-t2;
    if(d<0) d+=24*60;
    int h=d/60, m=d%60;
    string H=to_string(h);
    string M=to_string(m);
    if(H.size()<2) {
        cout<<0<<H<<":";
        if(M.size()<2) cout<<0<<M;
        else cout<<M;
    }
    else {
        cout<<H<<":";
        if(M.size()<2) cout<<0<<M;
        else cout<<M;
    }
}
