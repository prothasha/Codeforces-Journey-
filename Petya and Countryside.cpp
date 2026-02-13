#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n; cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    int ans=0;
    for(int i=0; i<n; i++) {
        int s=1, j=i-1;
        while(j>=0 && vec[j]<=vec[j+1]) {
            s++;
            j--;
        }
        j=i+1;
        while(j<n && vec[j]<=vec[j-1]) {
            s++;
            j++;
        }
        ans=max(ans,s);
    }
    cout<<ans;
}
int main(){
    p();
    code();
}
