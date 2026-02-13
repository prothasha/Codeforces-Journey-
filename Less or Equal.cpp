#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k; cin>>n>>k;
    vector<int>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    sort(vec.begin(), vec.end());
    if(k==0) {
        if(vec[0]>1) cout<<vec[0]-1<<endl;
        else cout<<-1<<endl;
    }
    else if(vec[k-1]!=vec[k]) cout<<vec[k-1]<<endl;
    else cout<<-1<<endl;
}
