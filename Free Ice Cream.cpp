#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    long long x;
    cin>>x;
    int s=0;
    for(int i=0; i<n; i++) {
        char op;
        long long d;
        cin>>op>>d;
        if(op=='+') x+=d;
        else {
            if(x>=d) x-=d;
            else s++;
        }
    }
    cout<<x<< " "<<s<<endl;
    return 0;
}
