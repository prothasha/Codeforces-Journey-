#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    int min1=0, max1=0;
    for(int i=1; i<=n; i++) {
        if(i%7==0 || i%7==6) min1++;
        if(i%7==1 || i%7==2) max1++;
    }
    cout<<min1<<" "<<max1;
}
