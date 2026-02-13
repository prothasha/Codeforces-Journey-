#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, c1=0, c2=0, x;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        if(arr[i]%2==0) c1++;
        else c2++;
    }
    if(c1<c2) {
        for(int i=0; i<n; i++) {
            if(arr[i]%2==0) x=i;
        }
    }
    else if(c2<c1) {
        for(int i=0; i<n; i++) {
            if(arr[i]%2!=0) x=i;
        }
    }
    cout<<x+1;
    return 0;
}
