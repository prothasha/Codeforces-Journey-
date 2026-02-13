#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin>>n>>m;
    vector<int>vec1(n), vec2(m), ans;
    for(int i=0; i<n; i++) cin>>vec1[i];
    for(int i=0; i<m; i++) cin>>vec2[i];
    sort(vec1.begin(), vec1.end());
    for(int j=0; j<m; j++) {
        int c=upper_bound(vec1.begin(), vec1.end(), vec2[j])-vec1.begin();
        ans.push_back(c);
    }
    for(int i: ans) cout<<i<<" ";
}

