#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int x, y, z;
        cin>>x>>y>>z;
        if(x+y==z || y+z==x || z+x==y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

