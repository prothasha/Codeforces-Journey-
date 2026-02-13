#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--) {
        int n, m; cin>>n>>m;
        vector<string>vec(n);
        for(int i=0; i<n; i++) cin>>vec[i];
        int max1=0, r, co;
        for(int i=0; i<n; i++) {
            int c=0;
            for(int j=0; j<m; j++) {
                if(vec[i][j]=='#') {
                    c++;
                    if(c==1) co=j+1;
                }
                if(c>max1) {
                    max1=c; r=i+1;
                }
            }
        }
        cout<<r<<" "<<co<<endl;
    }
}
