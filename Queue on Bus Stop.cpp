#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m; cin>>n>>m;
    vector<int>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    int sum=0, c=0;
    for(int i=0; i<n; i++) {
        if(sum+vec[i]<=m) sum+=vec[i];
        else {
            sum=vec[i];
            c++;
        }
    }
    if(sum>0) c++;
    cout<<c<<endl;
}
