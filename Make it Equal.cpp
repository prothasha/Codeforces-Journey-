#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, k; cin>>n>>k;
        vector<int>vec1(n), vec2(n);
        vector<int>s1, s2;
        for(int i=0; i<n; i++) cin>>vec1[i];
        for(int i=0; i<n; i++) cin>>vec2[i];
        for(int i=0; i<n; i++) {
            s1.push_back(min((vec1[i]%k), (k-(vec1[i]%k))));
            s2.push_back(min((vec2[i]%k), (k-(vec2[i]%k))));
        }
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        bool p=false;
        for(int i=0; i<n; i++) {
            if(s1[i]==s2[i]) p=true;
            else {
                p=false;
                break;
            }
        }
        if(!p) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
