#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        long long n, W; cin>>n>>W;
        vector<long long>vec(n), ind;
        for(int i=0; i<n; i++) cin>>vec[i];
        long long max1=0;
        long long h=(W+1)/2;
        bool f=false;
        for(int i=0; i<n; i++) {
            if(vec[i]>=h && vec[i]<=W) {
                cout<<1<<endl;
                cout<<i+1<<endl;
                f=true;
                break;
            }
        }
        if(f) continue;
        for(int i=0; i<n; i++) {
            if(vec[i]<W && max1+vec[i]<=W) {
                max1+=vec[i];
                ind.push_back(i + 1);
            }
            if(max1>=h) break;
        }
        if(max1>=h && max1<=W){
            cout<<ind.size()<<endl;
            for(long long i:ind) cout<<i<<" ";
        }
        else cout<<-1;
        cout<<endl;
    }
    return 0;
}
