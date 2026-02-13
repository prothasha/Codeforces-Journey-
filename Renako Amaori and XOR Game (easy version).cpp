#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int>vec1(n),vec2(n);
        for(int i=0; i<n; i++) cin>>vec1[i];
        for(int i=0; i<n; i++) cin>>vec2[i];
        int o=0;
        for(int i=0; i<n; i++) {
            if(vec1[i]==1) o++;
            if(vec2[i]==1) o++;
        }
        if(o%2==0) {
            cout<<"Tie"<<endl;
            continue;
        }
        for(int i=n-1; i>=0; i--) {
            if(vec1[i]+vec2[i]==1) {
                if((i+1)%2==0) cout<<"Mai"<<endl;
                else cout<<"Ajisai"<<endl;
                break;
            }
        }
    }
    return 0;
}
