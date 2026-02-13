#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    while(n--) {
        int t;
        cin >> t;
        vector<int> arr(t);
        for(int i = 0; i < t; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int i;
        for(i=1; i<t; i++) {
            if(arr[i]-arr[i-1]>1) {
                cout<<"NO"<<endl;
                break;
            }
        }
        if(i==t) cout<<"YES"<<endl;
    }
    return 0;
}
