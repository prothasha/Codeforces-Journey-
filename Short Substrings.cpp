#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        string b;
        cin>>b;

        string a="";
        a+=b[0];
        for(int i=1; i<b.length(); i+=2) {
            a+=b[i];
        }
        cout<<a<<endl;
    }
    return 0;
}

