#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    map<string, int>f;
    string s;
    for(int i=0; i<n; i++) {
        cin>>s;
        f[s]++;
        if(f[s]==1) cout<<"OK"<<endl;
        else cout<<s<<f[s]-1<<endl;
    }
    return 0;
}

