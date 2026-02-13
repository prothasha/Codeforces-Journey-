#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;
        vector<int>vec1(n), vec2(n);
        set<char>s1, s2;
        int sum=0;
        for(int i=0; i<n; i++) {
            s1.insert(s[i]);
            vec1[i]=s1.size();
        }
        for(int i=n-1; i>=0; i--) {
            s2.insert(s[i]);
            vec2[i]=s2.size();
        }
        for(int i=0; i<n-1; i++) {
            int total=vec1[i]+vec2[i+1];
            sum=max(sum, total);
        }
        cout<<sum<<endl;
    }
    return 0;
}
