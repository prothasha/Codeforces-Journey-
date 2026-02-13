#include<bits/stdc++.h>
using namespace std;
int main() {
    string s, t, m;
    cin>>s>>t;

    int l=s.length();
    int l2=t.length();
    int c=0;
    if(l==l2) {
        for(int i=l-1, j=0; i>=0, j<l; i--, j++) {
            if(s[i]==t[j]) {
                c++;
            }
            else {
                cout<<"NO";
                break;
            }
        }
        if(c==l && c==l2) cout<<"YES";
        }
    else {
        cout<<"NO";
    }

    return 0;
}

