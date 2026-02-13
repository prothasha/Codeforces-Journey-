#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k; cin>>n>>k;
    vector<int>vec(k), ans;
    for(int i=0; i<k; i++) cin>>vec[i];
    for(int i=0; i<k; i++) ans.push_back(vec[i]);
    int p=1;
    for(int i=0; i<k; i++) {
        cout<<vec[i]<<" ";
        for(int j=1; j<n; j++) {
            while(find(ans.begin(), ans.end(), p)!=ans.end()) p++;
            cout<<p<<" ";
            ans.push_back(p);
            p++;
        }
        cout<<endl;
    }
}
