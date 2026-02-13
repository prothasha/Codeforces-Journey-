#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>vec(n);
        for(int i=0; i<n; i++) cin>>vec[i];
        int c=-1, a=0;
        for(int i=0; i<n; i++) {
            if(c>vec[i]) a++;
            else c=vec[i];
        }
        cout<<a<<endl;
    }
}

