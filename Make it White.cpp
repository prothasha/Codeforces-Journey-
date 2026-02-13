#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int t;
        string s;
        cin>>t>>s;
        int p=0, q=0, m=0;
        for(int i=0; i<t; i++) {
            if(s[i]=='B') {
                p=i;
                break;
            }
        }
        for(int j=t; j>0; j--) {
            if(s[j]=='B') {
                q=j;
                break;
            }
        }
        m=q-p+1;
        cout<<m<<endl;
    }
}
