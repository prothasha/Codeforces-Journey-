#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin>>n>>m;
    vector<int>vec;
    for(int i=0; i<m; i++) {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int min1=INT_MAX;
    sort(vec.begin(), vec.end());
    for(int i=0; i<=m-n; i++) {
        int p=vec[n+i-1]-vec[i];
        if(min1>p) min1=p;
    }
    cout<<min1<<endl;
}
