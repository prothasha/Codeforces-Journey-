#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<pair<int, int>>m;
    for(int i=0; i<n; i++) {
        int l, r; cin>>l>>r;
        m.push_back({l, r});
    }
    bool p=true; int c=0;
    for(auto i:m) if(i.first==i.second) c++;

    vector<int>vec;
    for(auto i: m) vec.push_back(i.second);
    for(int i=0; i<n-1; i++) if(vec[i]<vec[i+1]) p=false;

    if(c!=n) cout<<"rated"<<endl;
    else if(!p) cout<<"unrated"<<endl;
    else cout<<"maybe"<<endl;
}
