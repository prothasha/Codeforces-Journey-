#include<bits/stdc++.h>
using namespace std;
int main() {
    string s; cin>>s;
    int n; cin>>n;
    map<int,int>m;
    for(int i=1; i<s.size(); i++) {
        m[i]=m[i-1];
        if(s[i]==s[i-1]) m[i]++;
    }
    while(n--) {
        int p, q;
        cin>>p>>q;
        cout<<m[q-1]-m[p-1]<<endl;
    }
}
