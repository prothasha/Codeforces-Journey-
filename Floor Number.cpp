#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++) {
        int n, x;
        cin>>n>>x;
        int c=1;
        int nc=3;
        while(nc<=n) {
            c++;
            nc+=x;
        }
        cout<<c<<endl;
    }
}
