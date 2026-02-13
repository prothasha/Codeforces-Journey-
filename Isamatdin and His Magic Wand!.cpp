#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int t; cin>>t;

        vector<int>vec(t);
        for(int i=0; i<t; i++) cin>>vec[i];

        vector<int>e, o;
        for(int i=0; i<t; i++) {
            if(vec[i]%2==0) e.push_back(vec[i]);
            else o.push_back(vec[i]);
        }

        if(o.size()==0 || e.size()==0) {
            for(int i: vec) cout<<i<<" ";
        }
        else {
            sort(vec.begin(), vec.end());
            for(int i: vec) cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
