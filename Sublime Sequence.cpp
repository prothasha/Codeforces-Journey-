#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int x, n, c=0, p;
        cin>>x>>n;
        for(int i=0; i<n; i++) {
            if(i%2==0) p=x;
            else p=-x;
            c+=p;
        }
        cout<<c<<endl;
    }
}
