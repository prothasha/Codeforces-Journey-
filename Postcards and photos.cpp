#include<bits/stdc++.h>
using namespace std;
int main() {
    string s; cin>>s;
    int ans=1, y=1;
    for(int i=0; i<s.size()-1; i++) {
        if(s[i]==s[i+1] && y<5) y++;
        else {
            y=1;
            ans++;
        }
    }
    cout<<ans;
}
