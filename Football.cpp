#include<bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cin>>n;
    int c=0;
    int l=n.length();
    for (int i=0; i<l; i++) {
        if(n[i]==n[i+1]) {
            c=c+1;
            if(c==6) {
                break;
            }
        }
        else {
            c=0;
        }
    }
    if(c>=6) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    return 0;
}
