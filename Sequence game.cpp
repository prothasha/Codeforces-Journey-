#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int>vec(n);
        for(int i=0; i<n; i++) cin>>vec[i];
        int x; cin>>x;
        int max1=*max_element(vec.begin(),vec.end()), min1=*min_element(vec.begin(),vec.end());
        if(min1<=x && x<=max1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

