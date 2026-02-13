#include<bits/stdc++.h>
using namespace std;
int main() {
    int w, x, y, z;
    cin>>w>>x>>y>>z;
    vector<int>arr;
    arr.push_back(w);
    arr.push_back(x);
    arr.push_back(y);
    arr.push_back(z);
    sort(arr.begin(), arr.end());
    for(int i=0; i<3; i++) {
        cout<<arr[3]-arr[i]<<" ";
    }
    return 0;
}
