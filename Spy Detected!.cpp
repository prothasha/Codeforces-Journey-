#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int t;
        cin>>t;
        vector<int>arr;
        for(int i=0; i<t; i++) {
            int x;
            cin>>x;
            arr.push_back(x);
        }
        int c;
        if(arr[0]==arr[1] || arr[0]==arr[2]) c=arr[0];
            else c=arr[1];
        for(int i=0; i<t; i++) {
            if(arr[i]!=c) cout<<i+1<<endl;
        }
    }
    return 0;
}
