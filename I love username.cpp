#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, c=0;
    cin>>n;
    vector<int>arr;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        arr.push_back(x);
    }
        int max1=arr[0], min1=arr[0];
        for(int i=1; i<arr.size(); i++) {
            if(arr[i]>max1) {
                max1=arr[i];
                c++;
            }
            else if(arr[i]<min1) {
                min1=arr[i];
                c++;
            }
        }
    cout<<c;
    return 0;
}

