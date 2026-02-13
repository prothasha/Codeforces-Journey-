#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, k; cin>>n>>k;
        map<int, int>freq;
        for(int i=0; i<n; i++) {
            int x; cin>>x;
            freq[x]++;
        }
        int ans1=0, ans2=0, c=0, ans;
        for(int i=0; i<k; i++) {
            if(freq.count(i)) continue;
            else ans1++;
        }
        for(auto i:freq) if(i.first==k) ans2+=i.second;
        c=min(ans1, ans2);
        ans=ans1+ans2-c;
        cout<<ans<<endl;
    }
}

