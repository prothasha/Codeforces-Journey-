#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    while(n--) {
        int x;
        cin>>x;
        int co=0;
        for(int i=1; i<=9; i++) {
            long long p=i;
            while(p<=x) {
                co++;
                p=p*10+i;
            }
        }
        cout<<co<<endl;
    }
}

