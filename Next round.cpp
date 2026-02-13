#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, p;
    cin>>n>>p;
    int arr[100], c=0;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int t=arr[p-1];
    for(int i=0; i<n; i++) {
        if (arr[i]>=t && arr[i]>0)
            c++;
    }
    cout<<c<<endl;
}
