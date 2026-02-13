#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int x;
        cin>>x;
        int sum=0, c=0;
        for(int i=2; i<=x; i++) {
            int k=x/i;
            int m=i*(k*(k+1)/2);
            if(sum<m) {
                sum=m;
                c=i;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
