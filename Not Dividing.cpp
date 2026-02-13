#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int a; cin>>a;
        vector<int>vec(a);
        for(int i=0; i<a; i++) cin>>vec[i];
        for(int i=0; i<a; i++) if(vec[i]==1) vec[i]=2;
        for(int i=0; i<a-1; i++) if(vec[i+1]%vec[i]==0) vec[i+1]=vec[i+1]+1;
        for(int i:vec) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
