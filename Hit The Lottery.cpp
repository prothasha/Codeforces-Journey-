#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int c=0;
    int arr[]={100, 20, 10, 5, 1};

    for (int i=0; i<5; ++i) {
        c=c+(n/arr[i]);
        n=n%arr[i];
    }
    cout<<c<<endl;
    return 0;
}
