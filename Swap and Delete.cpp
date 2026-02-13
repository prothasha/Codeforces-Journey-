#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    while(n--) {
        string s; cin>>s;
        int c1=0, c2=0;
        for(int i=0; i<s.size(); i++) {
            if(s[i]=='1') c1++;
            else if(s[i]=='0') c2++;
        }
        int ans=0;
        for(char i:s) {
            if(i=='1') {
                if(c2>0) {
                    c2--;
                    ans++;
                } else {
                    break;
                }
            }
            else {
                if(c1>0) {
                    c1--;
                    ans++;
                } else {
                    break;
                }
            }
        }
        cout<<s.size()-ans<<endl;
    }
    return 0;
}
