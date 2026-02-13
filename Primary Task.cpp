#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    while(n--) {
        string s; cin>>s;
        if(s.size()>2 && s[0]=='1' && s[1]=='0') {
            if(s.size()==3 && s[2]=='1') cout<<"NO"<<endl;
            else if(s.size()>2 && (s[2]>='1' && s[2]<='9')) cout<<"YES"<<endl;
            else {
                cout<<"NO"<<endl;
            }
        }
        else cout<<"NO"<<endl;
    }
}
