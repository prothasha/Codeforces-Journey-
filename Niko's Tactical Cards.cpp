#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        vector<long long>vec1(n), vec2(n);
        for(int i=0; i<n; i++) cin>>vec1[i];
        for(int i=0; i<n; i++) cin>>vec2[i];
        long long k1=0;
        long long k2=0;
        for(int i=0; i<n; i++){
            // p=k-ai, q=bi-k
            long long redk=k1-vec1[i];
            long long bluek=vec2[i]+k2;
            long long redn=k2+vec1[i];
            long long bluen=-vec2[i]+k1;

            k1=max(redk, bluek);
            k2=max(redn, bluen);
        }
        cout<<k1<<endl;
    }
}
