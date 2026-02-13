#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int m=0;
    while(n--) {
        int x;
        cin>>x;
        int p=x/3;
        int q=x%3;
        if(q==0) cout<<p<<" "<<p<<endl;
        else if(q==1) cout<<p+1<<" "<<p<<endl;
        else if(q==2) cout<<p<<" "<<p+1<<endl;
    }
    return 0;
}
