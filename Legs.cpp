#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int t;
        cin>>t;
        int c=0;
        while(t>=2) {
            if(t>=4) {
                t=t-4;
                c++;
            }
            else if(t>=2) {
                t=t-2;
                c++;
            }
        }
        cout<<c<<endl;
    }
}

