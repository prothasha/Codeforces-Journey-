#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        int w, x, y, z;
        cin>>w>>x>>y>>z;
        int c=0;
        if(x>w) c++;
        if(y>w) c++;
        if(z>w) c++;
        cout<<c<<endl;
    }
    return 0;
}

