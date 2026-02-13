#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int>vec(n);
        for(int i=0; i<n; i++) cin>>vec[i];
        int max1=INT_MIN;
        for(int i=0; i<n; i++) {
            if(vec[i]>=max1) max1=vec[i];
        }
        cout<<max1*n<<endl;
    }
}
