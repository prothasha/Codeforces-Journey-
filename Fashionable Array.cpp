#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int>vec(n);
        for(int i=0; i<n; i++) cin>>vec[i];
        sort(vec.begin(), vec.end());
        if((vec[0]+vec[n-1])%2==0) cout<<0<<endl;
        else {
            int o1=1;
            for(int i=1; i<n; i++) {
                if(vec[i]%2==vec[0]%2) o1++;
                else break;
            }
            int o2=1;
            for(int i=n-2; i>=0; i--) {
                if(vec[i]%2==vec[n-1]%2) o2++;
                else break;
            }
            cout<<min(o1, o2)<<endl;
        }
    }
    return 0;
}
