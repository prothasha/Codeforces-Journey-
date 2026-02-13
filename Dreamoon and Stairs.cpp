#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin>>n>>m;
    int min1=(n+1)/2;
    for(int i=min1; i<=n; i++) {
        if(i%m==0) {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
