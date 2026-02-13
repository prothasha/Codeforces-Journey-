#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int t;
        cin>>t;
        int sum=0;
        for(int i=0; i<t-1; i++) {
            int x; cin>>x;
            sum+=x;
        }
        sum=-1*sum;
        cout<<sum<<endl;
    }
    return 0;
}
