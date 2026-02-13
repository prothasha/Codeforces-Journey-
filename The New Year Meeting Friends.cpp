#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>arr;
    int x, y, z;
    cin>>x>>y>>z;

    arr.push_back(x);
    arr.push_back(y);
    arr.push_back(z);

    sort(arr.begin(), arr.end());

    int p=arr[1]-arr[0];
    int q=arr[2]-arr[1];
    cout<<p+q;
}
