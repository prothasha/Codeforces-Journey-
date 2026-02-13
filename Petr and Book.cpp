#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>vec(7);
    for(int i=0; i<7; i++) cin>>vec[i];
    int i=0;
    while(n>0) {
        n-=vec[i];
        i++;
        if(i>6) i=0;
    }
    if(i==0) cout<<7;
    else cout<<i;
}
