#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s=0;
    double sum;
    cin>>n;
    for (int i=0; i<n; i++) {
        int x;
        cin>>x;
        s=s+x;
    }
    sum=(double)s/n;
    cout<<fixed<<setprecision(12)<<sum;
    return 0;
}
