#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    map<string, int>m;
    while(n--) {
        string s;
        cin>>s;
        m[s]++;
    }
    int m1=0;
    string ans;
    for(auto i:m) {
        if(m1<i.second) {
            m1=i.second;
            ans=i.first;
        }
    }
    cout<<ans<<endl;
    return 0;
}
