#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n, k; cin>>n>>k;
        string s; cin>>s;
        vector<int>vecc(n, 0);
        for(int i=0; i<n; i++) {
            if(s[i]=='1') {
                for(int j=i; j<=i+k && j<n; j++) {
                    vecc[j]=1;
                }
            }
        }
        int co=0;
        for(int i=0; i<n; i++) {
            if(vecc[i]==0) co++;
        }
        cout<<co<<endl;
    }
}
