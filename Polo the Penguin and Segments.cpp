#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, k; cin>>t>>k;
    int co=0;
    while(t--){
        int a, b; cin>>a>>b;
        int len=b-a+1;
        co+=len;
    }
    int p=co%k;
    if(p==0) cout<<p;
    else cout<<k-p;
}
