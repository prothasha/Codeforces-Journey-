#include<bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cin>>n;
    int l=n.length();
    int c=0;

    for (int i=0; i<l; i++) {
        if(n[i]=='4' || n[i]=='7') {
            c=c+1;
        }
        else {
            continue;
        }
    }
    if(c==4 || c==7) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }

    return 0;
}
