#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin>>n>>k;
    vector<long long>vec(n);
    for(long long i=0; i<n; i++) cin>>vec[i];
    for(long long i=0; i<n && k>0; i++) {
        if(vec[i]<0) {
            vec[i]*=-1;
            k--;
        }
    }
    long long ans=0;
    for(long long i=0; i<n; i++) ans+=vec[i];
    if(k%2==1) {
        long long min1=*min_element(vec.begin(), vec.end());
        ans-=2*min1;
    }
    cout<<ans;
}
