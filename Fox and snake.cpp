#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin>>n>>m;

    for (int r=0; r<n; r++) {
        if (r%2==0) {
            for (int i=0; i<m; i++) cout<<"#";
        } else if (r%4==1) {
            for (int i=0; i<m-1; i++) cout<<".";
            cout<<"#";
        } else {
            cout<<"#";
            for (int i=1; i<m; i++) cout<<".";
        }
        cout<<endl;
    }

    return 0;
}
