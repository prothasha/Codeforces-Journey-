#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x=0, y=0;
    cin>>n;
    for(int i=0; i<n; i++) {
        int a, b;
        cin>>a>>b;
        if(a>b) x++;
        else if (b>a) y++;
    }
    if(x<y) cout<<"Chris"<<endl;
    else if (x>y) cout<<"Mishka"<<endl;
    else cout<<"Friendship is magic!^^"<<endl;
    return 0;
}

