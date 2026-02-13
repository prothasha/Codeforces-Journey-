#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        map<int,long long>freq;
        long long c=0;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            c+=freq[x-i];
            freq[x-i]++;
        }
        cout<<c<<endl;
    }
}
