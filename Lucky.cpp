#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        string x;
        cin>>x;
        int a=0, b=0;
        for(int i=0, j=(x.size()-1); i<3, j>(x.size()-4); i++, j--) {
            a+=x[i];
            b+=x[j];
        }
        if(a==b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}



