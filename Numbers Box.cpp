#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, m; cin>>n>>m;
        int sum=0;
        int C=0;
        int min1=INT_MAX;
        vector<int>vec(n*m);
        for(int i=0; i<n*m; i++) cin>>vec[i];
        for(int i=0; i<n*m; i++) {
            sum+=abs(vec[i]);
            if(vec[i]<0) C++;
            min1=min(min1, abs(vec[i]));
        }
        if(C%2==0) cout<<sum<<endl;
        else cout<<sum-2*min1<<endl;
    }
}
