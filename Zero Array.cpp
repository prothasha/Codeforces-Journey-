#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    long long n; cin>>n;
    vector<long long>vec(n);
    for(long long i=0; i<n; i++) cin>>vec[i];
    long long s=0;
    for(long long i=0; i<n; i++) s+=vec[i];
    long long max1=*max_element(vec.begin(), vec.end());
    if(s%2==0 && max1<=s/2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    p();
    code();
}
