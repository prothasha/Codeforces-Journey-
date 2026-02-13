#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m, co=0;
    cin>>n>>m;
    vector<int>vec1, vec2;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        vec1.push_back(x);
    }
    for(int i=0; i<n; i++) {
        if(vec1[i]<0) vec2.push_back(vec1[i]);
    }
    sort(vec2.begin(), vec2.end());
    for(int i=0; i<m && i<vec2.size(); i++) {
        co+=vec2[i];
    }
    cout<<abs(co)<<endl;
    return 0;
}

