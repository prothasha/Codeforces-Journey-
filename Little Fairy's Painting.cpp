#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>vecc(n);
        for(int i=0; i<n; i++) cin>>vecc[i];
        set<int>s;
        for(int i=0; i<n; i++) s.insert(vecc[i]);
        int p=s.size();
        int a=p;
        while(true) {
            if(s.find(a)!=s.end()) break;
            else a++;
        }
        cout<<a<<endl;
    }
}
