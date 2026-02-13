#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;

    int p[1000];
    int ans[1000];

    for (int i=1; i<=n; i++) {
        cin>>p[i];
        ans[p[i]]=i;
    }

    for (int i=1; i<=n; i++) {
        cout<<ans[i]<<" ";
    }
    cout << endl;
    return 0;
}
