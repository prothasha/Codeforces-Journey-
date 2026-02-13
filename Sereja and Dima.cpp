#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>arr;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int l=0, r=n-1;
    int s=0, d=0;

    for(int i=0; l<=r; i++) {
        int c;
        if (arr[l]>arr[r]) {
            c=arr[l];
            l++;
        } else {
            c=arr[r];
            r--;
        }

        if (i%2==0) s+=c;
        else d+=c;
    }

    cout<<s<<" "<<d<<endl;
    return 0;
}
