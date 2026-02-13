#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>arr;
    int p;
    cin>>p;
    for(int i=0; i<p; i++) {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int q;
    cin>>q;
    for(int j=0; j<q; j++) {
        int y;
        cin>>y;
        arr.push_back(y);
    }
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    int c=arr.size();
    if(c==n) {
        cout<<"I become the guy.";
    }
    else {
        cout<<"Oh, my keyboard!";
    }
    return 0;
}
