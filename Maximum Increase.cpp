#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    int ans=1, c=1;
    for(int i=0; i<vec.size()-1; i++) {
        if(vec[i]<vec[i+1]) c++;
        else c=1;
        ans=max(ans, c);
    }
    cout<<ans<<endl;
}
