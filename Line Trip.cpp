#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, x;
        cin>>n>>x;
        vector<int>vec(n);
        for(int i=0; i<n; i++) {
            cin>>vec[i];
        }
        int max1=vec[0];
        for(int i=1; i<n; i++) {
            int g=vec[i]-vec[i-1];
            if(g>max1) {
                max1=g;
            }
        }
        int l=2*(x-vec[n-1]);
        if(l>max1) {
            max1=l;
        }
        cout<<max1<<endl;
    }
    return 0;
}
