#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, total=0, sum=0, p, tt=0;
    cin>>n;
    vector<int>arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
        total+=arr[i];
    }
    sort(arr.rbegin(),arr.rend());
    for (int p:arr) {
        sum+=p;
        tt++;
        if (sum>total-sum) break;
    }
    cout<<tt<<endl;
    return 0;
}
