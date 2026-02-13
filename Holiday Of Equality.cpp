#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    int max1=0;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        if(arr[i]>max1) {
            max1=arr[i];
        }
    }
    int sum=0;
    for(int i=0; i<n; i++) {
        sum+=(max1-arr[i]);
    }
    cout<<sum<<endl;
    return 0;
}
