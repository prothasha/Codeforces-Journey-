#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int a, b, n; cin>>a>>b>>n;
        vector<int>vec;
        for(int i=0; i<n; i++) {
            int x; cin>>x;
            vec.push_back(x);
        }
        long long sum=b;
        for(int i=0; i<n; i++) {
            sum+=min(vec[i], a-1);
        }
        cout<<sum<<endl;
    }
    return 0;
}
