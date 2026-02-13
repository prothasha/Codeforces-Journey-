#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long n,k; cin>>n>>k;
        if(n>=k && (n%2==k%2)) {
            cout<<"YES"<<endl;
            for(int i=0; i<k-1; i++) cout<<1<<" ";
            cout<<n-(k-1)<<endl;
        }
        else if(n%2==0 && n>=2*k) {
            cout<<"YES"<<endl;
            for(int i=0; i<k-1; i++) cout<<2<<" ";
            cout<<n-2*(k-1)<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
