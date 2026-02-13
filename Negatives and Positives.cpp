#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--) {
        long long n; cin>>n;
        vector<long long>vec(n);
        for(int i=0; i<n; i++) cin>>vec[i];
        long long ans1=0, neg=0;
        for(int i=0; i<n; i++) {
            if(vec[i]<0) {
                vec[i]=-vec[i];
                neg++;
            }
            ans1+=vec[i];
        }
        if(neg%2==0) {
            cout<<ans1<<endl;
            continue;
        }
        long long min1=INT_MAX;
        for(int i=0; i<n; i++) if(min1>vec[i]) min1=vec[i];
        long long ans2=ans1-min1-min1;
        cout<<ans2<<endl;
    }
}
