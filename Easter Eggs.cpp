#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    string p="ROYGBIV";
    string q="";
    string r="GBIV";
    n=n-7;
    for(int i=0; i<n; i++) q=q+r[i%4];
    string ans=p+q;
    cout<<ans;
}
